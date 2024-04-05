from time import sleep
import threading
import socket
import logging
import json
from threading import Lock

# Konfigurasjon
HOST = '192.168.50.140'
PORT = 9999
SPEED_DELAY = 0.00000001 / 100000
SPR_X = 200 * 32 
SPR_YZ = SPR_X * 2 
CW = 1  
CCW = 0  
X_STEP = 21
X_DIR = 20
Y_STEP = 16
Y_DIR = 19
Z_STEP = 6
Z_DIR = 13
position_lock = Lock()
current_position = {'X': 0, 'Y': 0, 'Z': 0}

logging.basicConfig(level=logging.INFO, format='%(asctime)s - %(levelname)s - %(message)s')


def setup():
    pass


def calibrate():
    """Setter nåværende posisjon som nullpunkt for alle aksene."""
    for axis in current_position.keys():
        current_position[axis] = 0
    logging.info("System calibrated.")


def goto_zero():
    """Beveger alle aksene tilbake til deres kalibrerte nullposisjoner."""
    target_positions = [(axis, 0) for axis in current_position] 
    rotate_multiple_axes_to_positions(target_positions)
    logging.info("All axes returned to zero position.")


def rotate_to_position(step_pin, dir_pin, axis, target_position):
    global current_position
    # Beregn differansen fra nåværende posisjon til målposisjon
    degrees_to_rotate = (target_position - current_position[axis]) % 360
    # Bestem rotasjonsretning (korteste vei)
    if degrees_to_rotate > 180:
        degrees_to_rotate -= 360 

    direction = CW if degrees_to_rotate > 0 else CCW
    steps = int(abs(degrees_to_rotate) / 360 * (SPR_X if axis == 'X' else SPR_YZ))
    for _ in range(steps):
        sleep(SPEED_DELAY)
        sleep(SPEED_DELAY)
    with position_lock:
        current_position[axis] = target_position % 360


def rotate_multiple_axes_to_positions(commands):
    threads = []
    for command in commands:
        axis, target_position = command
        thread = threading.Thread(target=rotate_to_position, args=(globals()[f"{axis}_STEP"], globals()[f"{axis}_DIR"], axis, target_position))
        threads.append(thread)
        thread.start()
    for thread in threads:
        thread.join()


def handle_client(conn, addr):
    logging.info(f'Connected by {addr}')
    try:
        while True:
            data = conn.recv(1024)
            if not data:
                break
            try:
                cmd = json.loads(data.decode('utf-8'))
                response = {"status": "success", "message": ""}
                if cmd["command"].upper() == "CALIBRATE" or cmd["command"].upper() == "RECALIBRATE":
                    calibrate()
                    response["message"] = "Calibration successful."
                elif cmd["command"].upper() == "GOTOZERO":
                    goto_zero()
                    response["message"] = "Moved to zero position."
                elif cmd["command"].upper() == "EXIT":
                    response["message"] = "Exiting."
                    conn.sendall(json.dumps(response).encode('utf-8'))
                    break
                else:
                    target_positions = [(c["axis"], c["target_position"]) for c in cmd.get("positions", [])]
                    rotate_multiple_axes_to_positions(target_positions)
                    response["message"] = "Position commands processed."
    
                response["current_position"] = current_position
                conn.sendall(json.dumps(response).encode('utf-8'))

            except json.JSONDecodeError:
                logging.error("Invalid JSON received.")
                conn.sendall(json.dumps({"status": "error", "message": "Invalid JSON format."}).encode('utf-8'))
    except ConnectionResetError:
        logging.warning(f"Connection with {addr} was reset.")
    except Exception as e:
        logging.error(f"An unexpected error occurred with {addr}: {e}")
    finally:
        logging.info(f"Closing connection with {addr}")
        conn.close()


def start_server():
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
        s.bind((HOST, PORT))
        s.listen()
        logging.info(f"Server listening on {HOST}:{PORT}")
        while True:
            conn, addr = s.accept()
            client_thread = threading.Thread(target=handle_client, args=(conn, addr))
            client_thread.start()


def main():
    setup()
    try:
        start_server()
    except KeyboardInterrupt:
        print("\nServer stopped by User")

if __name__ == "__main__":
    main()

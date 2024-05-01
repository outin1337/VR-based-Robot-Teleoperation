from time import sleep
import RPi.GPIO as GPIO
import threading
import socket
import logging
import json
from threading import Lock

# Configuration
HOST = '10.0.1.58'
PORT = 9999
SPEED_DELAY = 0.00000001 / 100000
SPR_XY = 200 * 32 
SPR_Z = SPR_XY * 2
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
update_pos = {'X': 0, 'Y': 0, 'Z': 0}
sensor_pos = {'X': 0, 'Y': 0, 'Z': 0}

logging.basicConfig(level=logging.INFO, format='%(asctime)s - %(levelname)s - %(message)s')

def setup():
    GPIO.setmode(GPIO.BCM)
    GPIO.setup(X_STEP, GPIO.OUT)
    GPIO.setup(X_DIR, GPIO.OUT)
    GPIO.setup(Y_STEP, GPIO.OUT)
    GPIO.setup(Y_DIR, GPIO.OUT)
    GPIO.setup(Z_STEP, GPIO.OUT)
    GPIO.setup(Z_DIR, GPIO.OUT)

def calibrate():
    """Set current position as zero point for all axes."""
    for axis in current_position.keys():
        current_position[axis] = 0
    logging.info("System calibrated.")

def goto_zero():
    """Move all axes back to their calibrated zero positions."""
    target_positions = [(axis, 0) for axis in current_position] 
    rotate_multiple_axes_to_positions(target_positions)
    logging.info("All axes returned to zero position.")

def rotate_to_position(step_pin, dir_pin, axis, degrees_difference):
    global current_position
    # Calculate new position using the difference
    new_position = (current_position[axis] + degrees_difference) % 360
    # Calculate the shortest path to the new position
    if degrees_difference > 180:
        degrees_difference -= 360
    elif degrees_difference < -180:
        degrees_difference += 360
    
    direction = CW if degrees_difference > 0 else CCW
    steps = int(abs(degrees_difference) / 360 * (SPR_Z if axis == 'Z' else SPR_XY))

    GPIO.output(dir_pin, direction)
    for _ in range(steps):
        GPIO.output(step_pin, GPIO.HIGH)
        sleep(SPEED_DELAY)
        GPIO.output(step_pin, GPIO.LOW)
        sleep(SPEED_DELAY)
    
    with position_lock:
        current_position[axis] = new_position

def rotate_multiple_axes_to_positions(commands):
    threads = []
    for command in commands:
        axis, degrees_difference = command
        thread = threading.Thread(target=rotate_to_position, args=(globals()[f"{axis}_STEP"], globals()[f"{axis}_DIR"], axis, degrees_difference))
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
                if cmd["command"].upper() == "CALIBRATE":
                    calibrate()
                    response["message"] = "Calibration successful."
                elif cmd["command"].upper() == "GOTOZERO":
                    goto_zero()
                    response["message"] = "Moved to zero position."
                elif cmd["command"].upper() == "EXIT":
                    response["message"] = "Exiting."
                    conn.sendall(json.dumps(response).encode('utf-8'))
                    break
                elif cmd["command"].upper().startswith("ROTATE "):
                    _, x_diff, y_diff, z_diff = cmd["command"].split()
                    x_diff, y_diff, z_diff = int(x_diff), int(y_diff), int(z_diff)
                    target_positions = [('X', x_diff), ('Y', y_diff), ('Z', z_diff)]
                    rotate_multiple_axes_to_positions(target_positions)
                    response["message"] = "Rotation commands processed."
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
    finally:
        GPIO.cleanup()

if __name__ == "__main__":
    main()

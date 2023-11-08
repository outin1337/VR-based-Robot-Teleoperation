import RPi.GPIO as GPIO
from time import sleep
import socket

# Set up GPIO
GPIO.setmode(GPIO.BOARD)

# Pin definitions
X_STEP = 33
X_DIR = 35
Y_STEP = 29
Y_DIR = 31
Z_STEP = 11 
Z_DIR = 13

# Initialize pins
motor_pins = [X_STEP, X_DIR, Y_STEP, Y_DIR, Z_STEP, Z_DIR]
for pin in motor_pins:
    GPIO.setup(pin, GPIO.OUT)
    GPIO.output(pin, GPIO.LOW)



# Function to rotate motor
def rotate_motor(step_pin, dir_pin, degrees, delay=0.0025):
    steps = int(degrees * (200 / 360))  # Assuming 200 steps per revolution
    GPIO.output(dir_pin, GPIO.HIGH if degrees >= 0 else GPIO.LOW)
    for _ in range(abs(steps)):
        GPIO.output(step_pin, GPIO.HIGH)
        sleep(delay)
        GPIO.output(step_pin, GPIO.LOW)



# Initialize TCP Socket
server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server_socket.bind(('158.39.162.184', 8083))
server_socket.listen(5)
print("Server is listening for incoming connections...")

while True:
    client_socket, client_address = server_socket.accept()
    print(f"Connection from: {client_address}")
    
    
    while True:
        data = client_socket.recv(1024).decode('utf-8')
        if not data:
           break
        
        print(f"{data}")

        split_data = data.replace(",",".").split(" ")
        #split_data = data.split(" ")
        if split_data[0] == 'camera':  # Validating the string
            if split_data[1] == 'yaw':
                yaw_deg = float(split_data[2])
                #rotate_motor(Z_STEP, Z_DIR, yaw_deg)
            elif split_data[1] == 'pitch':
                pitch_deg = float(split_data[2])
                rotate_motor(Y_STEP, Y_DIR, pitch_deg)
            elif split_data[1] == 'roll':
                roll_deg = float(split_data[2])
                rotate_motor(X_STEP, X_DIR, roll_deg)
            


            
            

        #response = "Motor movement complete."
        #client_socket.send(response.encode('utf-8'))

    client_socket.close()

GPIO.cleanup()
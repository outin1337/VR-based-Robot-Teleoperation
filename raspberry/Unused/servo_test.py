import pigpio
import pygame
from pyquaternion import Quaternion

# Initialize pigpio and servos
pi = pigpio.pi()
servo_yaw_pin = 26
servo_pitch_pin = 16

# Set PWM frequency for both servos
pi.set_PWM_frequency(servo_yaw_pin, 50)
pi.set_PWM_frequency(servo_pitch_pin, 50)

# Define servo position ranges (adjust as needed)
servo_yaw_min = 1000
servo_yaw_max = 2000
servo_pitch_min = 1000
servo_pitch_max = 2000

# Initialize Pygame
pygame.init()
screen = pygame.display.set_mode((100, 100))

# Set initial orientations and servo positions
yaw_orientation = Quaternion()
sensitivity = 1.0

# Define flags for arrow key presses
left_pressed = False
right_pressed = False

try:
    while True:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                pygame.quit()
                pi.set_servo_pulsewidth(servo_yaw_pin, 0)
                pi.set_servo_pulsewidth(servo_pitch_pin, 0)
                pi.stop()
                exit()

        # Get the state of arrow keys
        keys = pygame.key.get_pressed()

        # Handle left and right arrow keys for servo on pin 26 (yaw)
        if keys[pygame.K_LEFT]:
            left_pressed = True
            right_pressed = False
            yaw_orientation = yaw_orientation * Quaternion(axis=[0, 0, 1], angle=-0.02)
        elif keys[pygame.K_RIGHT]:
            left_pressed = False
            right_pressed = True
            yaw_orientation = yaw_orientation * Quaternion(axis=[0, 0, 1], angle=0.02)
        else:
            left_pressed = False
            right_pressed = False

        # Handle up and down arrow keys for servo on pin 16 (pitch)
        if keys[pygame.K_UP]:
            pitch_orientation = Quaternion(axis=[1, 0, 0], angle=0.02)
        elif keys[pygame.K_DOWN]:
            pitch_orientation = Quaternion(axis=[1, 0, 0], angle=-0.02)
        else:
            pitch_orientation = Quaternion()

        # Calculate and set servo positions for yaw and pitch
        yaw = yaw_orientation.yaw_pitch_roll[0]
        servo_yaw_position = int(servo_yaw_min + (servo_yaw_max - servo_yaw_min) * (yaw * sensitivity))
        servo_yaw_position = max(servo_yaw_min, min(servo_yaw_position, servo_yaw_max))
        pi.set_servo_pulsewidth(servo_yaw_pin, servo_yaw_position)

        pitch = pitch_orientation.yaw_pitch_roll[1]
        servo_pitch_position = int(servo_pitch_min + (servo_pitch_max - servo_pitch_min) * (pitch * sensitivity))
        servo_pitch_position = max(servo_pitch_min, min(servo_pitch_position, servo_pitch_max))
        pi.set_servo_pulsewidth(servo_pitch_pin, servo_pitch_position)

finally:
    pi.set_servo_pulsewidth(servo_yaw_pin, 0)
    pi.set_servo_pulsewidth(servo_pitch_pin, 0)
    pi.stop()

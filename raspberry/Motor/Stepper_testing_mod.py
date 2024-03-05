import RPi.GPIO as GPIO
from time import sleep

class StepperMotor:
    def __init__(self, pins, delay=0.0208, steps_per_revolution=200, mode='FULL'):
        self.pins = pins
        self.delay = delay
        self.steps_per_revolution = steps_per_revolution
        self.mode = mode.upper()
        GPIO.setmode(GPIO.BCM)
        for pin in self.pins:
            GPIO.setup(pin, GPIO.OUT)
            GPIO.output(pin, False)
        self.set_mode(self.mode)

    def set_mode(self, mode):
        if mode == 'FULL':
            self.sequence = [
                [1,0,0,0],
                [0,1,0,0],
                [0,0,1,0],
                [0,0,0,1]
            ]
            self.steps_per_revolution = 200
        elif mode == 'HALF':
            self.sequence = [
                [1,0,0,0],
                [1,1,0,0],
                [0,1,0,0],
                [0,1,1,0],
                [0,0,1,0],
                [0,0,1,1],
                [0,0,0,1],
                [1,0,0,1]
            ]
            self.steps_per_revolution = 400
        else:
            raise ValueError("Unsupported mode. Choose 'FULL' or 'HALF'.")

    def step(self, steps):
        direction = 1 if steps > 0 else -1
        steps = abs(steps)
        for _ in range(steps):
            for seq in self.sequence[::direction]:
                for pin in range(4):
                    GPIO.output(self.pins[pin], seq[pin])
                sleep(self.delay)

    def set_speed(self, speed):
        self.delay = 60.0 / (self.steps_per_revolution * speed)

class MotorController:
    def __init__(self, motors_config):
        self.motors = [StepperMotor(**config) for config in motors_config]

    def move_motor(self, motor_index, steps):
        if 0 <= motor_index < len(self.motors):
            self.motors[motor_index].step(steps)
        else:
            print("Motor index out of range")

    def set_motor_speed(self, motor_index, speed):
        if 0 <= motor_index < len(self.motors):
            self.motors[motor_index].set_speed(speed)
        else:
            print("Motor index out of range")

    def cleanup(self):
        GPIO.cleanup()

if __name__ == "__main__":
    motors_config = [
        {"pins": [17, 18, 27, 22], "delay": 0.0208, "steps_per_revolution": 200, "mode": 'FULL'},
        {"pins": [23, 24, 25, 4], "delay": 0.0208, "steps_per_revolution": 200, "mode": 'HALF'},
        {"pins": [5, 6, 13, 19], "delay": 0.0208, "steps_per_revolution": 200, "mode": 'FULL'}
    ]

    controller = MotorController(motors_config)

    try:
        while True:
            motor_index = int(input("Select motor (0-2): "))
            steps = int(input("Enter steps (positive for one direction, negative for the other): "))
            speed = float(input("Enter speed (RPM): "))
            controller.set_motor_speed(motor_index, speed)
            controller.move_motor(motor_index, steps)

    except KeyboardInterrupt:
        print("\nProgram exited")

    finally:
        controller.cleanup()

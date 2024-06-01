#include <Arduino.h>
#include "pins_MINIRAMBO.h"

// Definer PWM-verdier for motorstrøm
#define MOTOR_CURRENT_XY  1300
#define MOTOR_CURRENT_Z   500
#define MOTOR_CURRENT_E   500

// Variabler for retning, stegtelling og pause
bool xMove = false;
bool yMove = false;
bool zMove = false;
bool xDirection = true;
bool yDirection = true;
bool zDirection = true;

// TODO: implement sensor data to current; desired is going to be the headset rotation;
int current_x = 0; int current_y = 0; int current_z = 0;
int desired_x = 0; int desired_y = 0; int desired_z = 0;

void setup() {
  Serial.begin(115200);
  Serial.println("Starter Vref justering med PWM");

  // Sett opp PWM pinner
  setupPWMPins();

  // Sett motorstrøm via PWM for X-, Y-, Z- og E-motorene
  setMotorCurrentPWM(MOTOR_CURRENT_PWM_XY_PIN, MOTOR_CURRENT_XY); // Sett strøm for X- og Y-motorene
  setMotorCurrentPWM(MOTOR_CURRENT_PWM_Z_PIN, MOTOR_CURRENT_Z);   // Sett strøm for Z-motoren
  setMotorCurrentPWM(MOTOR_CURRENT_PWM_E_PIN, MOTOR_CURRENT_E);   // Sett strøm for E-motoren

  Serial.println("Vref justering fullført");

  setupMotor();
}

void loop() {

  if (Serial.available() > 0) {
        String command = Serial.readStringUntil('\n');
        parseCommand(command);
  }

  getDifference();
  if (xMove || yMove || zMove)
  {
    motorLoop();
  }
}

void parseCommand(String command) {
    if (command.startsWith("SET")) {
        int x, y, z;
        sscanf(command.c_str(), "SET %d %d %d", &x, &y, &z);
        desired_x = x;
        desired_y = y;
        desired_z = z;
    }
}

void changeDirection(uint8_t pin, bool direction){
  digitalWrite(pin, direction ? HIGH : LOW);
}

void calculateDirection(bool &dir, int a, int b){
  int diff = a - b;
  dir = diff >= 0; 
}

void getDifference(){

  if (desired_x != current_x){
    calculateDirection(xDirection, desired_x, current_x);
    changeDirection(X_DIR_PIN, xDirection);
    xMove = true;
  }
  else {
    xMove = false;
  }

  if (desired_y != current_y){
    calculateDirection(yDirection, desired_y, current_y);
    changeDirection(Y_DIR_PIN, yDirection);
    yMove = true;
  }
  else {
    yMove = false;
  }

  if (desired_z != current_z){
    calculateDirection(zDirection, desired_z, current_z);
    changeDirection(Z_DIR_PIN, zDirection);
    zMove = true;
  }
  else {
    zMove = false;
  }
}

void setupPWMPins() {
  pinMode(MOTOR_CURRENT_PWM_XY_PIN, OUTPUT);
  pinMode(MOTOR_CURRENT_PWM_Z_PIN, OUTPUT);
  pinMode(MOTOR_CURRENT_PWM_E_PIN, OUTPUT);
}

void setMotorCurrentPWM(int pin, int value) {
  int pwm_value = map(value, 0, MOTOR_CURRENT_PWM_RANGE, 0, 255);
  analogWrite(pin, pwm_value);
}

void setupAxis(int stepPin, int dirPin, int enablePin, int ms1Pin, int ms2Pin) {
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  pinMode(enablePin, OUTPUT);
  digitalWrite(enablePin, LOW);
  
  pinMode(ms1Pin, OUTPUT);
  pinMode(ms2Pin, OUTPUT);
  digitalWrite(ms1Pin, HIGH);
  digitalWrite(ms2Pin, HIGH);
}

void setupMotor() {
  setupAxis(X_STEP_PIN, X_DIR_PIN, X_ENABLE_PIN, X_MS1_PIN, X_MS2_PIN);
  setupAxis(Y_STEP_PIN, Y_DIR_PIN, Y_ENABLE_PIN, Y_MS1_PIN, Y_MS2_PIN);
  setupAxis(Z_STEP_PIN, Z_DIR_PIN, Z_ENABLE_PIN, Z_MS1_PIN, Z_MS2_PIN);
  setupAxis(E0_STEP_PIN, E0_DIR_PIN, E0_ENABLE_PIN, E0_MS1_PIN, E0_MS2_PIN);
}

void motorLoop() {

  if (xMove) digitalWrite(X_STEP_PIN, HIGH);
  if (yMove) digitalWrite(Y_STEP_PIN, HIGH);
  if (zMove) digitalWrite(Z_STEP_PIN, HIGH);

  // remove this after implemented sensors!
  if (xDirection) current_x += 1;
  else current_x -= 1;
  
  if (yDirection) current_y += 1;
  else current_y -= 1;

  if (zDirection) current_z += 1;
  else current_z -= 1;

  delayMicroseconds(500);
  digitalWrite(X_STEP_PIN, LOW);
  digitalWrite(Y_STEP_PIN, LOW);
  digitalWrite(Z_STEP_PIN, LOW);

  delayMicroseconds(500);
}

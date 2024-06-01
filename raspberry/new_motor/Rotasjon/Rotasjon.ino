#include "Wire.h"
#include "I2Cdev.h"
#include "MPU9250.h"
#include "MadgwickAHRS.h"

MPU9250 accelgyro;
I2Cdev I2C_M;

Madgwick filter; // Madgwick filter

int16_t ax, ay, az;
int16_t gx, gy, gz;

float pitch, roll, yaw;

#define SAMPLE_TIME_MS 10

double gXZero, gYZero, gZZero;
double currentTime, lastTime;
double deltaTime, dt_d;

void setup() {
    Wire.begin();
    Wire.setClock(400000); // 400kHz I2C clock

    Serial.begin(115200);

    Serial.println("Initializing I2C devices...");
    accelgyro.initialize();

    Serial.println("Testing device connections...");
    Serial.println(accelgyro.testConnection() ? "MPU9250 connection successful" : "MPU9250 connection failed");

    Serial.println("Calibrating gyroscope...");
    calibrateGyro();

    lastTime = millis();
    filter.begin(100); // Assuming sampling rate is 100 Hz

    delay(1000);
    Serial.println("     ");
}

void loop() {
    if ((millis() - lastTime) >= SAMPLE_TIME_MS) {
        currentTime = millis();
        deltaTime = currentTime - lastTime;
        dt_d = deltaTime / 1000.0;
        lastTime = currentTime;

        getSensorData();

        // Update filter with gyro and accelerometer data
        filter.updateIMU(gx, gy, gz, ax, ay, az);

        // Get orientation in degrees
        pitch = filter.getPitch();
        roll = filter.getRoll();
        yaw = filter.getYaw();

        // Print orientation
        Serial.print("Pitch: ");
        Serial.print(pitch);
        Serial.print(" Roll: ");
        Serial.print(roll);
        Serial.print(" Yaw: ");
        Serial.println(yaw);

        delay(SAMPLE_TIME_MS);
    }
}

void calibrateGyro() {
    float totalX = 0, totalY = 0, totalZ = 0;
    for (int i = 0; i < 100; i++) {
        getGyroData();
        totalX += gx;
        totalY += gy;
        totalZ += gz;
        delay(10);
    }
    gXZero = totalX / 100;
    gYZero = totalY / 100;
    gZZero = totalZ / 100;
}

void getSensorData() {
    accelgyro.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);

    // Convert raw data to proper units and apply calibration offsets
    ax = (float) ax / 16384.0;
    ay = (float) ay / 16384.0;
    az = (float) az / 16384.0;

    gx = ((float) gx - gXZero) * 250.0 / 32768.0;
    gy = ((float) gy - gYZero) * 250.0 / 32768.0;
    gz = ((float) gz - gZZero) * 250.0 / 32768.0;
}

void getGyroData() {
    accelgyro.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);
}

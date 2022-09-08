# 1 "/home/syntax/Programs/ArduinoPrograms/C++/driveForward/calibrate.ino"
/**
 * @brief Calibrate moder to drive straight
 * 
 * @file calibrate.ino
 * @date 2020-04-20
 */
# 8 "/home/syntax/Programs/ArduinoPrograms/C++/driveForward/calibrate.ino" 2
RedBotMotors motors;


void setup() {
    pinMode(12, 0x2);
}
void loop() {
    if (digitalRead(12) == 0x0) {
        delay(300);
        motors.rightMotor(200);
        motors.leftMotor(189);
        delay(460);
        motors.stop();
        motors.brake();
    }
}

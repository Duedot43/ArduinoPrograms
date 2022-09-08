/**
 * @brief Calibrate moder to drive straight
 * 
 * @file calibrate.ino
 * @date 2020-04-20
 */
#include <RedBot.h>
RedBotMotors motors;


void setup() {
    pinMode(12, INPUT_PULLUP);
}
void loop() {
    if (digitalRead(12) == LOW) {
        delay(300);
        motors.rightMotor(200);
        motors.leftMotor(189);
        delay(460);
        motors.stop();
        motors.brake();
    }
}

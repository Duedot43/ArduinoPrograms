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
        motors.rightMotor(190);
        motors.leftMotor(200);
        delay(8000);
        motors.stop();
    }
}

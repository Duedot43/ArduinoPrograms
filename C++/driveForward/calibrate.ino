/**
 * @brief Calibrate moder to drive straight
 *
 * @file calibrate.ino
 * @date 2020-04-20
 */
#include <RedBot.h>
RedBotMotors motors;

void forwardInch(int inch)
{
    motors.rightMotor(200);
    motors.leftMotor(189);
    delay((460/12) * inch);
    motors.stop();
    motors.brake();
}
void setup()
{
    pinMode(12, INPUT_PULLUP);
}
void loop()
{
    if (digitalRead(12) == LOW)
    {
        forwardInch(12);
    }
}

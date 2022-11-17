

#include <RedBot.h>
#include <NewPing.h>
RedBotSensor IRLeft = RedBotSensor(A1); // initialize a sensor object on A1
RedBotSensor IRMiddle = RedBotSensor(A0); // initialize a sensor object on A0
RedBotSensor IRRight = RedBotSensor(A4); // initialize a sensor object on A4
RedBotMotors motors;
//NewPing needs ( Trigger Pin , Echo Pin , Distance )
NewPing sonar(3 , 9 , 300);
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  Serial.println(sonar.ping());
  Serial.println(sonar.ping_cm());
  if (sonar.ping_cm() <= 8 && sonar.ping_cm() != 0) {
    motors.stop();
    motors.brake();
    while (sonar.ping_cm() <= 8);
    delay(1000);
  }

  if (IRMiddle.read() >= 600) {
    motors.drive(40);
  }

  if (IRRight.read() >= 600) {
    delay(75);
    motors.rightDrive(-40);
    motors.leftDrive(70);
    delay(25);
  }

  if (IRLeft.read() >= 600) {
    delay(75);
    motors.rightDrive(70);
    motors.leftDrive(-40);
    delay(25);
  }
  // delay(100);
}



#include <RedBot.h>
RedBotSensor IRLeft = RedBotSensor(A1); // initialize a sensor object on A3
RedBotSensor IRMiddle = RedBotSensor(A0); // initialize a sensor object on A6
RedBotSensor IRRight = RedBotSensor(A4); // initialize a sensor object on A7
RedBotMotors motors;
void setup()
{
  Serial.begin(9600);
}
void loop()
{
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
  Serial.print("IR Sensor Readings: ");
  Serial.print(IRLeft.read()); 
  Serial.print("\t");  // tab character
  Serial.print(IRMiddle.read());
  Serial.print("\t");  // tab character
  Serial.print(IRRight.read()); 
  Serial.println();
  delay(100);
}

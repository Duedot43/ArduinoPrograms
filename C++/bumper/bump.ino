

#include <RedBot.h>
RedBotMotors motors;

RedBotBumper lBumper = RedBotBumper(3);  // initialzes bumper object on pin 3
RedBotBumper rBumper = RedBotBumper(11); // initialzes bumper object on pin 11

int buttonPin = 12; // variable to store the button Pin 

int lBumperState;  // state variable to store the bumper value
int rBumperState;  // state variable to store the bumper value

void setup()
{
  // nothing here.
  Serial.begin(9600);
}

void loop()
{
  forward(255);
  lBumperState = lBumper.read();  // default INPUT state is HIGH, it is LOW when bumped
  rBumperState = rBumper.read();  // default INPUT state is HIGH, it is LOW when bumped
  Serial.print("Left     Right");
  Serial.print(lBumperState);
  Serial.print("   ");
  Serial.println(rBumperState);

    if (lBumperState == LOW) // left side is bumped/
  { 
    reverse();    // backs up
    turnRight();  // turns
  }

  if (rBumperState == LOW) // right side is bumped/
  { 
    reverse();   // backs up
    turnLeft();  // turns
  }

}

void forward(int speed)
{
    motors.rightDrive(speed);
    motors.leftDrive(speed - 11);
    // 460 is 12 inches for 200 speed hmm... i need 1 inch at 1 speed
}

// reverse() function -- backs up at full power
void reverse()
{
  motors.drive(-255);
  delay(500);
  motors.brake();
  delay(100);  // short delay to let robot fully stop
}

// turnRight() function -- turns RedBot to the Right
void turnRight()
{
  motors.leftMotor(-150);  // spin CCW
  motors.rightMotor(-150); // spin CCW
  delay(500);
  motors.brake();
  delay(100);  // short delay to let robot fully stop
}

// turnRight() function -- turns RedBot to the Left
void turnLeft()
{
  motors.leftMotor(+150);  // spin CW
  motors.rightMotor(+150); // spin CW
  delay(500);
  motors.brake();
  delay(100);  // short delay to let robot fully stop
}

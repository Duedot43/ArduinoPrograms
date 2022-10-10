// NewPing - Version: 1.9.1
#include <NewPing.h>
#include <RedBot.h>
// Arduino pin tied to trigger pin on the ultrasonic sensor.
// Arduino pin tied to echo pin on the ultrasonic sensor.
// Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.
RedBotMotors motors;

//NewPing needs ( Trigger Pin , Echo Pin , Distance )
NewPing sonarL(9 , 3 , 300); // NewPing setup of pins and maximum distance.
NewPing sonarR(10 ,11 , 300);
void setup() {
  Serial.begin(9600); // Open serial monitor at 9600 baud to see ping results.
}

void loop() {
  motors.leftMotor(analogRead(A6));
  motors.rightMotor(analogRead(A6));
  delay(50);                      // Wait 50ms between pings (about 20 pings/sec). 29ms should be the shortest delay between pings.
  unsigned int uSL = sonarL.ping();
  unsigned int uSR = sonarR.ping();
  
  int lDistance = sonarL.convert_cm(uSL);
  int rDistance = sonarR.convert_cm(uSR); 
  // Send ping, get ping time in microseconds (uS).
  Serial.print("Left Side: ");
  Serial.print(lDistance); // Convert ping time to distance and print result (0 = outside set distance range, no ping echo)
  Serial.print("cm");
  Serial.print("\t");
  Serial.print("Right Side");
  Serial.println( rDistance);


if( lDistance <= 20   &&  lDistance > 0 )
{
  motors.stop();
  turnLeft();
//Stop and turn right
}

if( rDistance <= 20  &&  rDistance > 0 )
{
  motors.stop();
  turnRight();
//Stop and turn left
}


}

  
void turnRight()
{
  motors.leftMotor(-150);  // spin CCW
  motors.rightMotor(155); // spin CCW
  delay(analogRead(A7));
  motors.brake();
  delay(100);  // short delay to let robot fully stop
}

// turnRight() function -- turns RedBot to the Left
void turnLeft()
{
  motors.leftMotor(150);  // spin CW
  motors.rightMotor(-155); // spin CW
  delay(analogRead(A7));
  motors.brake();
  delay(100);  // short delay to let robot fully stop
}

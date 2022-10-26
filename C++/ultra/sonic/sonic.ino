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
  driveVar(A6);
  delay(50);  
  // Wait 50ms between pings (about 20 pings/sec). 29ms should be the shortest delay between pings.
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


if( lDistance <= map(analogRead(A4), 0, 1023, 0, 300)   &&  lDistance > 0 )
{
  motors.stop();
  reverse(A7);
  turnLeft(A7);
//Stop and turn right
}

if( rDistance <= map(analogRead(A4), 0, 1023, 0, 300)  &&  rDistance > 0 )
{
  motors.stop();
  reverse(A7);
  turnRight(A7);
//Stop and turn left
}


}

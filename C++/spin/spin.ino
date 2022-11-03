#include <Servo.h>
#include <NewPing.h>
#include <RedBot.h>
// Arduino pin tied to trigger pin on the ultrasonic sensor.
// Arduino pin tied to echo pin on the ultrasonic sensor.
// Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.
RedBotMotors motors;

//NewPing needs ( Trigger Pin , Echo Pin , Distance )
NewPing sonar(3 , 9 , 300); // NewPing setup of pins and maximum distance.
Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  Serial.begin(9600);
  myservo.attach(10);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  driveVar(A6);
  for (pos = 0; pos <= 180; pos += map(analogRead(A1), 0, 1023, 0, 13)) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
    ck(myservo.read(), sonar.ping_cm());
  }

  for (pos = 180; pos >= 0; pos -= map(analogRead(A1), 0, 1023, 0, 13)) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
    ck(myservo.read(), sonar.ping_cm());
  }
}

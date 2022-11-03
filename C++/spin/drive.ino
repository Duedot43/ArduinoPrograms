void driveVar(int varPin) {
    int driveSpeed = map(analogRead(varPin), 0, 1023, 0, 255);
    motors.leftMotor(driveSpeed);
    motors.rightMotor(driveSpeed);
}

void turnRight(int varPin)
{
  motors.leftMotor(-150);  // spin CCW
  motors.rightMotor(155); // spin CCW
  delay(analogRead(varPin));
  motors.brake();
  delay(100);  // short delay to let robot fully stop
}

// turnRight() function -- turns RedBot to the Left
void turnLeft(int varPin)
{
    motors.leftMotor(150);  // spin CW
    motors.rightMotor(-155); // spin CW
    delay(analogRead(varPin));
    motors.brake();
    delay(100);  // short delay to let robot fully stop
}

void reverse(int varPin) {
  motors.stop();
  motors.leftMotor(-150);  // spin CW
  motors.rightMotor(-155); // spin CW
  delay(analogRead(varPin));
  motors.brake();
  delay(100);  // short delay to let robot fully stop
}

void ck(int pos, int distance) {
  Serial.println(distance);
  
  if( distance <= map(analogRead(A4), 0, 1023, 0, 300)   &&  distance > 0 && pos <= 5)
  {
    motors.stop();
    reverse(A7);
    turnRight(A7);
    driveVar(A6);
  //Stop and turn right
  }
  
  if( distance <= map(analogRead(A4), 0, 1023, 0, 300)  &&  distance > 0 && pos >= 90)
  {
    motors.stop();
    reverse(A7);
    turnLeft(A7);
    driveVar(A6);
  //Stop and turn left
  }
}

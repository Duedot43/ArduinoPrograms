# 1 "/home/syntax/Programs/ArduinoPrograms/C++/maze/maze.ino"
# 2 "/home/syntax/Programs/ArduinoPrograms/C++/maze/maze.ino" 2
RedBotMotors motors;

RedBotEncoder encoder = RedBotEncoder(A2, A5);

int countsPerRev = 192; // 4 pairs of N-S x 48:1 gearbox = 192 ticks per wheel rev

float wheelDiam = 2.56; // diam = 65mm / 25.4 mm/in
float wheelCirc = 3.1415926535897932384626433832795 * wheelDiam; // Redbot wheel circumference = pi*D
const int buttonPin = 12;

void setup()
{
    pinMode(buttonPin, 0x2);
    Serial.begin(9600);
}

void loop()
{

    if (digitalRead(buttonPin) == 0x0)
    {
        delay(500); // short delay to allow you to get your hands away before starting
        /*Here is where you put your code to drive your robot.
        You will be using the driveStraight, turnRight, and turnLeft functions
        for example:*/
        driveStraight(100, 100);
        turnRight(87);
        driveStraight(30, 100);
        turnLeft(45);
        driveStraight(20, 100);
        motors.stop();
    }
}

void driveStraight(float distance, int motorPower)
{
    long lCount = 0;
    long rCount = 0;
    long targetCount;
    float numRev;

    // variables for tracking the left and right encoder counts
    long prevlCount, prevrCount;

    long lDiff, rDiff; // diff between current encoder count and previous count

    // variables for setting left and right motor power
    int leftPower = motorPower;
    int rightPower = motorPower;

    // variable used to offset motor power on right vs left to keep straight.
    int offset = 3; // offset amount to compensate Right vs. Left drive

    numRev = distance / wheelCirc; // calculate the target # of rotations
    targetCount = numRev * countsPerRev; // calculate the target count

    // debug
    Serial.print("driveStraight() ");
    Serial.print(distance);
    Serial.print(" inches at ");
    Serial.print(motorPower);
    Serial.println(" power.");

    Serial.print("Target: ");
    Serial.print(numRev, 3);
    Serial.println(" revolutions.");
    Serial.println();

    // print out header
    Serial.print("Left\t"); // "Left" and tab
    Serial.print("Right\t"); // "Right" and tab
    Serial.println("Target count");
    Serial.println("============================");

    encoder.clearEnc(BOTH); // clear the encoder count
    delay(100); // short delay before starting the motors.

    motors.drive(motorPower); // start motors

    while (rCount < targetCount)
    {
        // while the right encoder is less than the target count -- debug print
        // the encoder values and wait -- this is a holding loop.
        lCount = encoder.getTicks(LEFT);
        rCount = encoder.getTicks(RIGHT);
        Serial.print(lCount);
        Serial.print("\t");
        Serial.print(rCount);
        Serial.print("\t");
        Serial.println(targetCount);

        motors.leftDrive(leftPower);
        motors.rightDrive(rightPower);

        // calculate the rotation "speed" as a difference in the count from previous cycle.
        lDiff = (lCount - prevlCount);
        rDiff = (rCount - prevrCount);

        // store the current count as the "previous" count for the next cycle.
        prevlCount = lCount;
        prevrCount = rCount;

        // if left is faster than the right, slow down the left / speed up right
        if (lDiff > rDiff)
        {
            leftPower = leftPower - offset;
            rightPower = rightPower + offset;
        }
        // if right is faster than the left, speed up the left / slow down right
        else if (lDiff < rDiff)
        {
            leftPower = leftPower + offset;
            rightPower = rightPower - offset;
        }
        delay(50); // short delay to give motors a chance to respond.
    }
    // now apply "brakes" to stop the motors.
    motors.brake();
}
void turnRight(float angle)
{
    /*This is for a pivot turn.  you will need to set this function up.
    Calibrate it to turn to 90 degrees */
    motors.rightDrive(-100);
    motors.leftDrive(100);
    // my delay is 200 ms to turn 90 degrees
    delay((angle / 90.00) * 375.00);
}
void turnLeft(float angle)
{
    // Do the same as above, but reverse the motor signs
    motors.rightDrive(100);
    motors.leftDrive(-100);
    // my delay is 200 ms to turn 90 degrees
    delay((angle / 90.00) * 375.00);
}

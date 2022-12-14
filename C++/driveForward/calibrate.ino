/**
 * @brief Calibrate moder to drive straight
 *
 * @file calibrate.ino
 * @date 2020-04-20
 */
#include <RedBot.h>
RedBotMotors motors;

RedBotEncoder encoder = RedBotEncoder(A2, 10);
int buttonPin = 12;
int countsPerRev = 192; // 4 pairs of N-S x 48:1 gearbox = 192 ticks per wheel rev

float wheelDiam = 2.56;           // diam = 65mm / 25.4 mm/in
float wheelCirc = PI * wheelDiam; // Redbot wheel circumference = pi*D

void driveForward(float distance, int motorPower)
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
    int offset = 2; // offset amount to compensate Right vs. Left drive

    numRev = distance / wheelCirc;       // calculate the target # of rotations
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
    Serial.print("Left\t");  // "Left" and tab
    Serial.print("Right\t"); // "Right" and tab
    Serial.println("Target count");
    Serial.println("============================");

    encoder.clearEnc(BOTH); // clear the encoder count
    delay(100);             // short delay before starting the motors.

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
}

void forwardInch(int inch, int speed, bool stop = true)
{
    motors.rightMotor(speed);
    motors.leftMotor(speed - 11);
    // 460 is 12 inches for 200 speed hmm... i need 1 inch at 1 speed
    delay((460 / 12) * inch);
    if (stop)
    {
        motors.stop();
    }
}
void setup()
{
    pinMode(12, INPUT_PULLUP);
    pinMode(13, OUTPUT);
    Serial.begin(9600);
}
void loop()
{
    if (digitalRead(12) == LOW)
    {
        driveForward(60, 200);
        Serial.print("left");
        motors.leftMotor(-100);
        delay(1100);
        motors.coast();
        driveForward(60, 200);
        motors.brake();
    }
}

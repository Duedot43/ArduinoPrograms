#include <RedBot.h>
RedBotMotors motors;

int countsPerRev = 192;
RedBotEncoder encoder = RedBotEncoder(A2, 10);

int lCount;
int rCount;

void setup()
{
    pinMode(12, INPUT_PULLUP);
    Serial.begin(9600);
    Serial.println("left    right");
    Serial.println("================");
}

int rev(int count)
{
    return count / countsPerRev;
}

void loop()
{
    if (digitalRead(12) == LOW)
    {
        encoder.clearEnc(BOTH);
        while (digitalRead(12) == LOW)
        {
            lCount = encoder.getTicks(LEFT);
            rCount = encoder.getTicks(RIGHT);
        }
        Serial.print(lCount);
        Serial.print("\t");
        Serial.println(rCount);
    }
}
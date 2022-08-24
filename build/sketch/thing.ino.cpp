#include <Arduino.h>
#line 1 "/home/syntax/Programs/ArduinoPrograms/thing.ino"
#line 1 "/home/syntax/Programs/ArduinoPrograms/thing.ino"
void setup();
#line 5 "/home/syntax/Programs/ArduinoPrograms/thing.ino"
void longLED();
#line 12 "/home/syntax/Programs/ArduinoPrograms/thing.ino"
void shortLED();
#line 19 "/home/syntax/Programs/ArduinoPrograms/thing.ino"
void runLED(int morseArray);
#line 24 "/home/syntax/Programs/ArduinoPrograms/thing.ino"
void loop();
#line 1 "/home/syntax/Programs/ArduinoPrograms/thing.ino"
void setup() {
    pinMode(13, OUTPUT);
}

void longLED() {
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(13, LOW);
    delay(300);
}

void shortLED() {
    digitalWrite(13, HIGH);
    delay(300);
    digitalWrite(13, LOW);
    delay(200);
}

void runLED(int morseArray) {
    for (int i=0;i<24;i++) {
        if ()
    }
}
void loop() {
    longLED();
    shortLED();
}

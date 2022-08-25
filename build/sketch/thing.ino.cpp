#include <Arduino.h>
#line 1 "/home/syntax/Programs/ArduinoPrograms/thing.ino"
#line 1 "/home/syntax/Programs/ArduinoPrograms/thing.ino"
void setup();
#line 5 "/home/syntax/Programs/ArduinoPrograms/thing.ino"
void longLED();
#line 11 "/home/syntax/Programs/ArduinoPrograms/thing.ino"
void shortLED();
#line 17 "/home/syntax/Programs/ArduinoPrograms/thing.ino"
void runLED(int morseArray[]);
#line 32 "/home/syntax/Programs/ArduinoPrograms/thing.ino"
void loop();
#line 1 "/home/syntax/Programs/ArduinoPrograms/thing.ino"
void setup() {
    pinMode(13, OUTPUT);
}

void longLED() {
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(13, LOW);
}

void shortLED() {
    digitalWrite(13, HIGH);
    delay(300);
    digitalWrite(13, LOW);
}

void runLED(int morseArray[]) {
    for (int i=0;i<24;i++) {
        if (morseArray[i] == 1) {
            longLED();
        }
        if (morseArray[i] == 0) {
            shortLED();
        }
        if (morseArray[i] == 2) {
            delay(300);
        }
    }
}
//1 is a long LED and 0 is a short LED
//WORD IS pineapple
void loop() {
    int morseArray[] = {
        0, 1, 1, 0, 2,
        0, 0, 2,
        1, 0, 2,
        0, 2,
        0, 1, 2,
        0, 1, 1, 0, 2,
        0, 1, 1, 0, 2,
        0, 1, 0, 0, 2,
        0, 2, 2
    };
    runLED(morseArray);
    exit;
}

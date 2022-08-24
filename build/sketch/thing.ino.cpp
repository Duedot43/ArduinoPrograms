#include <Arduino.h>
#line 1 "/home/syntax/Programs/ArduinoPrograms/thing.ino"
#line 1 "/home/syntax/Programs/ArduinoPrograms/thing.ino"
void setup();
#line 4 "/home/syntax/Programs/ArduinoPrograms/thing.ino"
void longLED();
#line 10 "/home/syntax/Programs/ArduinoPrograms/thing.ino"
void shortLED();
#line 16 "/home/syntax/Programs/ArduinoPrograms/thing.ino"
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
void loop() {
    longLED();
    shortLED();
}

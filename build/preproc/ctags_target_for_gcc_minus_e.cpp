# 1 "/home/syntax/Programs/ArduinoPrograms/thing.ino"
void setup() {
    pinMode(13, 0x1);
}
void longLED() {
    digitalWrite(13, 0x1);
    delay(500);
    digitalWrite(13, 0x0);
    delay(300);
}
void shortLED() {
    digitalWrite(13, 0x1);
    delay(300);
    digitalWrite(13, 0x0);
    delay(200);
}
void loop() {
    longLED();
    shortLED();
}

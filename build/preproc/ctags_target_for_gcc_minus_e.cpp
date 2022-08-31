# 1 "/home/syntax/Programs/ArduinoPrograms/C++/buzzer/buzzer.ino"
void setup() {
    pinMode(9, 0x1);
    pinMode(12, 0x2);
}

void loop() {
    if (digitalRead(12) == 0x0) {
        tone(9, 1000);
        delay(125);
        noTone(9);
    }
}

void setup() {
    pinMode(9, OUTPUT);
    pinMode(12, INPUT_PULLUP);
}

void loop() {
    if (digitalRead(12) == LOW) {
        tone(9, 1000);
        delay(125);
        noTone(9);
    }
}
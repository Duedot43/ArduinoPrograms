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
        
    }
}
void loop() {
    longLED();
    shortLED();
}
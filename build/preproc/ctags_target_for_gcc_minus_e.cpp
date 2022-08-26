# 1 "/home/syntax/Programs/ArduinoPrograms/C++/Unit 1/pineapple.ino"
void setup() {
    pinMode(13, 0x1);
}

void longLED() {
    digitalWrite(13, 0x1);
    delay(500);
    digitalWrite(13, 0x0);
    delay(100);
}

void shortLED() {
    digitalWrite(13, 0x1);
    delay(300);
    digitalWrite(13, 0x0);
    delay(100);
}

void runLED(String morseArray[]) {
    for (int i=0;i<34;i++) {
        if (morseArray[i] == "-") {
            longLED();
        }
        if (morseArray[i] == ".") {
            shortLED();
        }
        if (morseArray[i] == "2") {
            delay(300);
        }
    }
}
//1 is a long LED and 0 is a short LED
//WORD IS pineapple
void loop() {
    String morseArray[] = {
        ".", "-", "-", ".", "2",
        ".", ".", "2",
        "-", ".", "2",
        ".", "2",
        ".", "-", "2",
        ".", "-", "-", ".", "2",
        ".", "-", "-", ".", "2",
        ".", "-", ".", ".", "2",
        ".", "2", "2"
    };
    runLED(morseArray);
    exit;
}

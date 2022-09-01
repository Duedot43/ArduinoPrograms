# 1 "/home/syntax/Programs/ArduinoPrograms/C++/buzzer/buzzer.ino"
# 2 "/home/syntax/Programs/ArduinoPrograms/C++/buzzer/buzzer.ino" 2

void playNote(int note, int duration)
// This custom function takes two parameters, note and duration to make playing songs easier.
// Each of the notes have been #defined in the notes.h file. The notes are broken down by
// octave and sharp (s) / flat (b).
{
    tone(9, note, duration);
    delay(duration);
}

void setup()
{
    pinMode(9, 0x1);
    pinMode(12, 0x2);
}

void loop()
{
    if (digitalRead(12) == 0x0)
    {
        playNote(988, 200 /* # of milliseconds per beat*//4 /* ...and a sixteenth note.*/);
        playNote(988, 200 /* # of milliseconds per beat*//2 /* ...an eighth note...*/);
        playNote(392, 200 /* # of milliseconds per beat*//2 /* ...an eighth note...*/);
        playNote(587, 200 /* # of milliseconds per beat*//2 /* ...an eighth note...*/);
        playNote(494, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(659, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(494, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(659, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(440, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(659, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(440, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(659, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(392, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(659, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(392, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(659, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(392, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(659, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(392, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(659, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(349, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(659, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(262, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(659, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(294, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(587, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(330, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(659, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(349, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(784, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(220, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(587, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(330, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(587, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(659, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(294, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(220, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(0, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(220, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(659, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(165, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(659, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(220, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(659, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(165, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(165, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(220, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(659, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(165, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(165, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(659, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(247, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(659, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(659, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(165, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(659, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(330, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(659, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(247, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(165, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(330, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(659, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(247, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(659, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(659, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(523, 200 /* # of milliseconds per beat*//2 /* ...an eighth note...*/);
        playNote(659, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(523, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(247, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(0, 200 /* # of milliseconds per beat*//2 /* ...an eighth note...*/);
        playNote(262, 200 /* # of milliseconds per beat*//2 /* ...an eighth note...*/);
        playNote(165, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(330, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(220, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(659, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(165, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(659, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(220, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(659, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(659, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(165, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        playNote(659, 200 /* # of milliseconds per beat*/ /* ...a quarter note...*/);
        //END ME
    }
}

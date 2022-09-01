#include "notes.h"

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
    pinMode(9, OUTPUT);
    pinMode(12, INPUT_PULLUP);
}

void loop()
{
    if (digitalRead(12) == LOW)
    {
        playNote(noteB5, SN);
        playNote(noteB5, EN);
        playNote(noteG4, EN);
        playNote(noteD5, EN);
        playNote(noteB4, QN);
        playNote(noteE5, QN);
        playNote(noteB4, QN);
        playNote(noteE5, QN);
        playNote(noteA4, QN);
        playNote(noteE5, QN);
        playNote(noteA4, QN);
        playNote(noteE5, QN);
        playNote(noteG4, QN);
        playNote(noteE5, QN);
        playNote(noteG4, QN);
        playNote(noteE5, QN);
        playNote(noteG4, QN);
        playNote(noteE5, QN);
        playNote(noteG4, QN);
        playNote(noteE5, QN);
        playNote(noteF4, QN);
        playNote(noteE5, QN);
        playNote(noteC4, QN);
        playNote(noteE5, QN);
        playNote(noteD4, QN);
        playNote(noteD5, QN);
        playNote(noteE4, QN);
        playNote(noteE5, QN);
        playNote(noteF4, QN);
        playNote(noteG5, QN);
        playNote(noteA3, QN);
        playNote(noteD5, QN);
        playNote(noteE4, QN);
        playNote(noteD5, QN);
        playNote(noteE5, QN);
        playNote(noteD4, QN);
        playNote(noteA3, QN);
        playNote(Rest, QN);
        playNote(noteA3, QN);
        playNote(noteE5, QN);
        playNote(noteE3, QN);
        playNote(noteE5, QN);
        playNote(noteA3, QN);
        playNote(noteE5, QN);
        playNote(noteE3, QN);
        playNote(noteE3, QN);
        playNote(noteA3, QN);
        playNote(noteE5, QN);
        playNote(noteE3, QN);
        playNote(noteE3, QN);
        playNote(noteE5, QN);
        playNote(noteB3, QN);
        playNote(noteE5, QN);
        playNote(noteE5, QN);
        playNote(noteE3, QN);
        playNote(noteE5, QN);
        playNote(noteE4, QN);
        playNote(noteE5, QN);
        playNote(noteB3, QN);
        playNote(noteE3, QN);
        playNote(noteE4, QN);
        playNote(noteE5, QN);
        playNote(noteB3, QN);
        playNote(noteE5, QN);
        playNote(noteE5, QN);
        playNote(noteC5, EN);
        playNote(noteE5, QN);
        playNote(noteC5, QN);
        playNote(noteB3, QN);
        playNote(Rest, EN);
        playNote(noteC4, EN);
        playNote(noteE3, QN);
        playNote(noteE4, QN);
        playNote(noteA3, QN);
        playNote(noteE5, QN);
        playNote(noteE3, QN);
        playNote(noteE5, QN);
        playNote(noteA3, QN);
        playNote(noteE5, QN);
        playNote(noteE5, QN);
        playNote(noteE3, QN);
        playNote(noteE5, QN);
        //END ME
    }
}
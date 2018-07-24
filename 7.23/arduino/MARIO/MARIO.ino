#include "pitches.h"

// notes in the melody:
int melody[] = {
  NOTE_E4,NOTE_E4,NOTE_E4,0,NOTE_C4,NOTE_E4,NOTE_G4,0,
  NOTE_C4,NOTE_G3,0,NOTE_E3,0,NOTE_A3,NOTE_B3,0,NOTE_AS3,NOTE_A3,
  NOTE_G3,NOTE_E4,NOTE_G4,NOTE_A4,NOTE_F4,NOTE_G4,0,NOTE_E4,NOTE_C4,NOTE_D4,NOTE_B3,
  NOTE_C4,NOTE_G3,0,NOTE_E3,0,NOTE_A3,NOTE_B3,0,NOTE_AS3,NOTE_A3,
  NOTE_G3,NOTE_E4,NOTE_G4,NOTE_A4,NOTE_F4,NOTE_G4,0,NOTE_E4,NOTE_C4,NOTE_D4,NOTE_B3
};

// note durations: 4 = quarter note, 8 = eighth note, etc.
int noteDurations[] = {
  10,5,10,13,10,5,4,4,
  3,10,8,8,13,5,10,13,10,5,
  8,8,8,8,10,10,13,5,10,10,5,
  3,10,8,8,13,5,10,13,10,5,
  8,8,8,8,10,10,13,5,10,10,5
};

void setup() {
  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 50; thisNote++) {

    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(8);
  }
}

void loop() {
  // no need to repeat the melody.
}

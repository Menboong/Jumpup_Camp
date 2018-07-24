#include "pitches.h"
#include <EEPROM.h>

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

int val;
void setup() 
{
  Serial.begin(9600);
  pinMode(3,INPUT);
   val = EEPROM.read(1);
   if(val>=50) val = 0;
}

void loop() {
  if(digitalRead(3)==0)
  {
    delay(30);
    while(digitalRead(3)==0);
    {
      for (int thisNote = val; thisNote < 50; thisNote++) 
      {
        int noteDuration = 1000 / noteDurations[thisNote];
        tone(8, melody[thisNote], noteDuration);
        int pauseBetweenNotes = noteDuration * 1.30;
        delay(pauseBetweenNotes);
        noTone(8);
        val++;
        if(val>=50) val = 0;
        if(analogRead(A0) >=300) 
        {
          val = 0;
          break;
        }
        if(digitalRead(3)==0)
        {
          while(digitalRead(3)==0);
          delay(30);
          EEPROM.write(1,val);
          Serial.println(EEPROM.read(1));
          break;
        }
      }
    }
  }
}

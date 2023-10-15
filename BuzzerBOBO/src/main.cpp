#include <Arduino.h>
#include <Buzzer.h>




int kwart = 1000/2;
  int achtste = 1000/4;

// put function declarations here:

Buzzer buzzer(2,23);

void setup() {
  // pinMode(buzzerBOBO, OUTPUT);
  

}

void loop() {
 
buzzer.begin(10);
int time = 500;
buzzer.sound(NOTE_G3, time / 2);
  buzzer.sound(NOTE_E4, time / 2);
  buzzer.sound(NOTE_D4, time / 2);
  buzzer.sound(NOTE_C4, time / 2);
  buzzer.sound(NOTE_G3, time * 2);
  
  buzzer.sound(NOTE_G3, time / 2);
  buzzer.sound(NOTE_E4, time / 2);
  buzzer.sound(NOTE_D4, time / 2);
  buzzer.sound(NOTE_C4, time / 2);
  buzzer.sound(NOTE_A4, time * 2);

  buzzer.sound(NOTE_A4, time / 2);
  buzzer.sound(NOTE_F4, time / 2);
  buzzer.sound(NOTE_E4, time / 2);
  buzzer.sound(NOTE_D4, time / 2);
  buzzer.sound(NOTE_G4, time);
  buzzer.sound(NOTE_G4, time);
  
  buzzer.sound(NOTE_A5, time / 2);
  buzzer.sound(NOTE_G4, time / 2);
  buzzer.sound(NOTE_F4, time / 2);
  buzzer.sound(NOTE_D4, time / 2);
  buzzer.sound(NOTE_E4, time * 2);
  
  buzzer.sound(NOTE_G3, time / 2);
  buzzer.sound(NOTE_E4, time / 2);
  buzzer.sound(NOTE_D4, time / 2);
  buzzer.sound(NOTE_C4, time / 2);
  buzzer.sound(NOTE_G3, time * 2);
  
 
  buzzer.end(2000);
  
}


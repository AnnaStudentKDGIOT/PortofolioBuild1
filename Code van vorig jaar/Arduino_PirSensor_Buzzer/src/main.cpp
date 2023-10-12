#include <Arduino.h>

#define Pirsensor 4
#define Buzzer    6

const long Interval = 500;
unsigned long PreviousMillis = 0;

void setup() {
  // t your setup code here, to run once:

  pinMode(Pirsensor, INPUT);
  pinMode(Buzzer , OUTPUT);


}

void loop() {


unsigned long CurrentMillis = millis();
if ( CurrentMillis - PreviousMillis > Interval)
{
 PreviousMillis = CurrentMillis;
 
 
  if (digitalRead(Pirsensor) == HIGH) {
  tone(Buzzer, 330, 450);  
  }

  if (digitalRead(Pirsensor) == LOW) {
    CurrentMillis = 0;
  }
  



}


}
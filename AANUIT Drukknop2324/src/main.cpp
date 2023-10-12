#include <Arduino.h>
#define PinRed 4 
#define buttonRed 5
#define buttonBlack 6


boolean Buttonstate = 0;
void setup() {
  pinMode(PinRed, OUTPUT);
  pinMode(buttonRed, INPUT);
  pinMode(buttonBlack, INPUT);
}

void loop() {
 if (digitalRead(buttonRed) == HIGH) {
      digitalWrite(PinRed, HIGH);
      Buttonstate = 1;
      delay(300);
 }
  if (digitalRead(buttonBlack) == HIGH) {
      digitalWrite(PinRed, LOW);
      Buttonstate = 2;
      delay(300);
  }
 Buttonstate = false;
}


// 


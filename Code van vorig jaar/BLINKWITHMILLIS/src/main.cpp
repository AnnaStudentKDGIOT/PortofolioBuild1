#include <Arduino.h>


#define Ledpin 4




  unsigned long millis() == 1000;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(Ledpin, OUTPUT);
}

void loop() {


if (digitalRead(Ledpin) > millis() ) 
{
    digitalWrite(Ledpin, HIGH);
  
  

if (digitalRead(Ledpin) < millis() ) {
  digitalWrite(Ledpin, LOW);

}
  }
    }






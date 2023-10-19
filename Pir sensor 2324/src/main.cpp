#include <Arduino.h>

#define pir 12


void setup() {
  // put your setup code here, to run once:
  pinMode(pir, INPUT);
  Serial.begin(9600);
}

void loop() {
if (digitalRead(pir) == HIGH){
  Serial.println("1");
}else{
  Serial.println("0");
}





}

// put function definitions here:

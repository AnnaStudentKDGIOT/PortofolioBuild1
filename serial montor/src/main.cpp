#include <Arduino.h>
#define potentiometerAnna A1

int potentiometerValue = 0;
// put function declarations here:


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  potentiometerValue = analogRead(potentiometerAnna);
  Serial.println(potentiometerValue);
  delay(250);
}

// put function definitions here:

#include<Arduino.h>


#define button1Pin 2 // Pin voor drukknop 1
#define button2Pin 3 // Pin voor drukknop 2
#define led1Pin  7   // Pin voor LED 1
#define led2Pin  8   // Pin voor LED 2

unsigned long previousMillis1 = 0; // Variabele om de tijd voor LED 1 bij te houden
unsigned long previousMillis2 = 0; // Variabele om de tijd voor LED 2 bij te houden
const long interval = 5000;       // Interval voor LED's (5 seconden)

void setup() {
  pinMode(button1Pin, INPUT_PULLUP); // Drukknop 1 als input met pull-up weerstand
  pinMode(button2Pin, INPUT_PULLUP); // Drukknop 2 als input met pull-up weerstand
  pinMode(led1Pin, OUTPUT);         // LED 1 als output
  pinMode(led2Pin, OUTPUT);         // LED 2 als output
}

void loop() {
  unsigned long currentMillis = millis(); // Huidige tijd

  // Controleer drukknop 1
  if (digitalRead(button1Pin) == LOW) { // Drukknop 1 is ingedrukt
    if (currentMillis - previousMillis1 >= interval) { // Controleer of de tijd is verstreken
      digitalWrite(led1Pin, HIGH); // Zet LED 1 aan
      previousMillis1 = currentMillis; // Vernieuw de vorige tijd
    }
  } else {
    digitalWrite(led1Pin, LOW); // Zet LED 1 uit
  }

  // Controleer drukknop 2
  if (digitalRead(button2Pin) == LOW) { // Drukknop 2 is ingedrukt
    if (currentMillis - previousMillis2 >= interval) { // Controleer of de tijd is verstreken
      digitalWrite(led2Pin, HIGH); // Zet LED 2 aan
      previousMillis2 = currentMillis; // Vernieuw de vorige tijd
    }
  } else {
    digitalWrite(led2Pin, LOW); // Zet LED 2 uit
  }
}

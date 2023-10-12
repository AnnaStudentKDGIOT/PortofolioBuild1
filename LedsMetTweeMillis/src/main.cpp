#include <Arduino.h>

#define ledPin1 7 // Pin voor LED 1
#define ledPin2  13 // Pin voor LED 2

unsigned long previousMillis1 = 0; // Variabele om de tijd voor LED 1 bij te houden
unsigned long previousMillis2 = 0; // Variabele om de tijd voor LED 2 bij te houden
const long interval1On = 3000; // Tijd dat LED 1 aan is (in milliseconden)
const long interval1Off = 2000; // Tijd dat LED 1 uit is (in milliseconden)
const long interval2On = 4000; // Tijd dat LED 2 aan is (in milliseconden)
const long interval2Off = 5000; // Tijd dat LED 2 uit is (in milliseconden)

int ledState1 = LOW; // Huidige toestand van LED 1
int ledState2 = LOW; // Huidige toestand van LED 2

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();

  // Controleer LED 1
  if (ledState1 == LOW && currentMillis - previousMillis1 >= interval1Off) {
    // Schakel LED 1 aan
    ledState1 = HIGH;
    previousMillis1 = currentMillis;
  } else if (ledState1 == HIGH && currentMillis - previousMillis1 >= interval1On) {
    // Schakel LED 1 uit
    ledState1 = LOW;
    previousMillis1 = currentMillis;
  }

  // Controleer LED 2
  if (ledState2 == LOW && currentMillis - previousMillis2 >= interval2Off) {
    // Schakel LED 2 aan
    ledState2 = HIGH;
    previousMillis2 = currentMillis;
  } else if (ledState2 == HIGH && currentMillis - previousMillis2 >= interval2On) {
    // Schakel LED 2 uit
    ledState2 = LOW;
    previousMillis2 = currentMillis;
  }

  // Zet de LEDs aan of uit op basis van hun huidige toestand
  digitalWrite(ledPin1, ledState1);
  digitalWrite(ledPin2, ledState2);
}

#include <Arduino.h>



#define ledPin 13  // Het pinnummer waar de LED op is aangesloten
unsigned long previousMillis = 0;  // Variabele om de vorige millis-tijd op te slaan
unsigned long interval = 1000;     // Interval in milliseconden (1 seconde)
boolean ledState = LOW;  // Huidige status van de LED

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();  // Huidige millis-tijd

  if (currentMillis - previousMillis >= interval) {
    // Controleer of er een seconde is verstreken
    previousMillis = currentMillis;  // Update de vorige millis-tijd

    // Wissel de status van de LED (aan/uit)
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

    digitalWrite(ledPin, ledState);  // Zet de LED aan of uit
  }

  // Voer hier de rest van je code uit
}

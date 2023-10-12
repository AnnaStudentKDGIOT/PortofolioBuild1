
#include <Arduino.h>

unsigned long previousMillis = 0;  // Variabele om de vorige millis-tijd op te slaan
unsigned long interval = 1000;     // Interval in milliseconden (1 seconde)

void setup() {
  Serial.begin(9600);
}

void loop() {
  unsigned long currentMillis = millis();  // Huidige millis-tijd

  if (currentMillis - previousMillis >= interval) {
    // Controleer of er een seconde is verstreken
    previousMillis = currentMillis;  // Update de vorige millis-tijd

    static int secondCount = 1;  // Teller voor de seconden
    Serial.print("Seconde ");
    Serial.println(secondCount);

    secondCount++;  // Verhoog de teller voor de volgende seconde
  }

  // Voer hier de rest van je code uit
}

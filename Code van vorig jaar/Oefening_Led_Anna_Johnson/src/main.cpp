#include <Arduino.h>

#define LED_RED 2
#define LED_GREEN 3
#define LED_YELLOW 4
#define LED_WHITE 5

void setup() {
  // put ylour setup code here, to run once:
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_WHITE, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_RED, HIGH);
  delay(500);
  digitalWrite(LED_RED, LOW);
  
  digitalWrite(LED_GREEN, HIGH);
  delay(500);
  digitalWrite(LED_GREEN, LOW);
  
  digitalWrite(LED_YELLOW, HIGH);
  delay(500);
  digitalWrite(LED_YELLOW, LOW);
  
  digitalWrite(LED_WHITE, HIGH);
  delay(500);
  digitalWrite(LED_WHITE, LOW);
  
  digitalWrite(LED_WHITE, HIGH);
  delay(500);
  digitalWrite(LED_WHITE, LOW);
  
  digitalWrite(LED_YELLOW, HIGH);
  delay(500);
  digitalWrite(LED_YELLOW, LOW);
  
  digitalWrite(LED_GREEN, HIGH);
  delay(500);
  digitalWrite(LED_GREEN, LOW);
  
  digitalWrite(LED_RED, HIGH);
  delay(500);
  digitalWrite(LED_RED, LOW);
  
}
#include <Arduino.h>



#define LED1
#define

#define
#define

#define
#define





const int BUTTON1_PIN = 2;
const int BUTTON2_PIN = 3;
const int LED1_PIN = 4;
const int LED2_PIN = 5;
const int LED3_PIN = 6;
const int LED4_PIN = 7;
const int LED5_PIN = 8;
const int LED6_PIN = 9;

int scoreTeam1 = 0;
int scoreTeam2 = 0;

int ledState1 = LOW;
int ledState2 = LOW;
int ledState3 = LOW;
int ledState4 = LOW;
int ledState5 = LOW;
int ledState6 = LOW;

unsigned long timeTeam1Pressed = 0;
unsigned long timeTeam2Pressed = 0;

void setup() {
  pinMode(BUTTON1_PIN, INPUT);
  pinMode(BUTTON2_PIN, INPUT);
  pinMode(LED1_PIN, OUTPUT);
  pinMode(LED2_PIN, OUTPUT);
  pinMode(LED3_PIN, OUTPUT);
  pinMode(LED4_PIN, OUTPUT);
  pinMode(LED5_PIN, OUTPUT);
  pinMode(LED6_PIN, OUTPUT);
}

void loop() {
  // Check for button presses and update scores
  if (digitalRead(BUTTON1_PIN) == HIGH && scoreTeam1 < 3) {
    timeTeam1Pressed = millis();
    scoreTeam1++;
  }
  if (digitalRead(BUTTON2_PIN) == HIGH && scoreTeam2 < 3) {
    timeTeam2Pressed = millis();
    scoreTeam2++;
  }

  // Update LED states based on button press times
  if (millis() - timeTeam1Pressed < 300)
}

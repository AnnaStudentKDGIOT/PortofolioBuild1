#include <Arduino.h>

#define Led_GREEN 3
#define Led_RED 2
#define Buzzer 5
#define lightsensor A0

int analogVal = 0;
bool resetFlag = false;
void resetState();

void setup() {
  Serial.begin(9600);
  pinMode(Led_GREEN, OUTPUT);
  pinMode(Led_RED, OUTPUT);
  pinMode(Buzzer, OUTPUT);
}

void loop() {
  analogVal = analogRead(lightsensor);
  Serial.println(analogVal);

  if (resetFlag) {
    resetFlag = false;
  }

  if (analogVal < 22) {
    Serial.println(" - Donker");
    Serial.println(analogVal);
    digitalWrite(Led_GREEN, HIGH);
    digitalWrite(Led_RED, LOW);
    resetFlag = true;
  }
  else if (analogVal <= 150) {
    Serial.println(" - Licht");
    Serial.println(analogVal);
    digitalWrite(Led_GREEN, HIGH);
    digitalWrite(Led_RED, LOW);
    resetFlag = true;
  }
  else if (analogVal >= 360) {
    Serial.println(" - Veel te veel licht den deathstar ontploft!");
    Serial.print(analogVal);
    digitalWrite(Led_GREEN, LOW);
    digitalWrite(Led_RED, HIGH);
    tone(Buzzer, 150, 100);
    resetFlag = true;
  }
  // else if (analogVal < 180) {
  //   Serial.println(" zet alle leds af");
  //   digitalWrite(Led_GREEN, LOW);
  //   digitalWrite(Led_RED, LOW);
  //   resetFlag = true;
  // }
   
}

void resetState() {
  digitalWrite(Led_GREEN, LOW);
  digitalWrite(Led_RED, LOW);
  noTone(Buzzer);
}

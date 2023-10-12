#include <Arduino.h>

#define Led_GreenA 7
#define Led_OrangeA 6
#define Led_RedA    5
#define Button_A    8

int Ledstate = 0;

void setup() {
  pinMode(Led_GreenA, OUTPUT);
  pinMode(Led_OrangeA, OUTPUT);
  pinMode(Led_RedA, OUTPUT);
  pinMode(Button_A, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(Button_A) == LOW && Ledstate == 0) {
    digitalWrite(Led_GreenA, HIGH);
    delay(10000);
    digitalWrite(Led_OrangeA, HIGH);
    digitalWrite(Led_GreenA, LOW);
    delay(3000);
    digitalWrite(Led_RedA, HIGH);
    digitalWrite(Led_OrangeA, LOW);
    delay(5000);
    Ledstate = 1;
  }
  else if (digitalRead(Button_A) == LOW && Ledstate == 1) {
    digitalWrite(Led_RedA, LOW);
    digitalWrite(Led_OrangeA, HIGH);
    delay(3000);
    digitalWrite(Led_OrangeA, LOW);
    digitalWrite(Led_GreenA, HIGH);
    Ledstate = 0;
  }
}

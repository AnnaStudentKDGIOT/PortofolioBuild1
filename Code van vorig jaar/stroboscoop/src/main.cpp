#include <Arduino.h>

#define LED_1 2
#define Potentionmeter A1

int potentionmeter4 = 0;
int Knippert = 0;
unsigned long Tijd = 0;

int Ledstate = 0;

void setup()
{
  // put your setup code here, to run once:
  pinMode(LED_1, OUTPUT);
  pinMode(Potentionmeter, INPUT);
  Serial.begin(9600);
}

void loop()
{
  // put your main code here, to run repeatedly:

  potentionmeter4 = analogRead(Potentionmeter);
  Serial.println(potentionmeter4);
  if (Tijd + potentionmeter4 < millis())
  {
Serial.println("zit in if");
    Tijd = millis();

    if (digitalRead(LED_1) == 1)
    {
      digitalWrite(LED_1, LOW);
    }
    else
    {
      digitalWrite(LED_1, HIGH);
    }

    Serial.println(Potentionmeter);
  }
}
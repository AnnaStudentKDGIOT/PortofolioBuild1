#include <Arduino.h>

#define LED1 6
#define LED2 5
#define PirSensorMotion 4

byte sensorPin = 2;
byte indicator = 13;

void setup()
{
  pinMode(PirSensorMotion,INPUT);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  byte state = digitalRead(PirSensorMotion);
  digitalWrite(LED1,state);
  if(state == 1) {
    Serial.println("Somebody is in this area!");
     digitalWrite(LED1,HIGH);
     

  }
 
  else if(state == 0)
  Serial.println("No one!");
  


digitalWrite(LED2, HIGH);

}
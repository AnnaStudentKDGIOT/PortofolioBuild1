#include <Arduino.h>

#define led_Red 2
#define led_Green 3
#define led_yellow 4
#define potentiometer A1

int potentiometerval = 0;



void setup() {
  pinMode(led_Red, OUTPUT);
  pinMode(led_Green, OUTPUT);
  pinMode(led_yellow, OUTPUT);
  Serial.begin(9600);

  
}

void loop() {

  potentiometerval = analogRead(potentiometer);  
  Serial.println(potentiometerval);

if (potentiometerval == 333) {
    digitalWrite(led_yellow, HIGH);
}
else if (potentiometerval < 333) {
  digitalWrite(led_yellow, LOW);
}

if (potentiometerval == 333*2) {
    digitalWrite(led_Red, HIGH);
}
else if (potentiometerval < 333*2) {
  digitalWrite(led_Red, LOW);
}

if (potentiometerval == 333*3)
{
  digitalWrite(led_Green, HIGH);
} else if (potentiometerval < 333*3) {

  digitalWrite(led_Green, LOW);
}







}

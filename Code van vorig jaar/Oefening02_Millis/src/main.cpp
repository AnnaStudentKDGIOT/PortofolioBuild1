#include <Arduino.h>

unsigned long time;
void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("_____Seconde:______");
 
 
 time = millis();
 delay(100);
 
  Serial.print(time);
  delay(1000);
}
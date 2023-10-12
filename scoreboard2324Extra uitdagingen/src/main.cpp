#include <Arduino.h>

// #define LED_Team1 LED_Green, LED_Red ,LED_yellow
// #define LED_Team2 LED_WhiteA, LED_WhiteB,LED_WhiteC


#define LED_Red 2
#define LED_Green 8
#define LED_yellow 7
#define LED_WhiteA 10
#define LED_WhiteB 9
#define LED_WhiteC 11

#define button_A 5
#define button_B 6


void setup() {
  // put your setup code here, to run once:
  pinMode(LED_Red, OUTPUT);
  pinMode(LED_Green, OUTPUT);
  pinMode(LED_yellow, OUTPUT);
  pinMode(LED_WhiteA, OUTPUT);
  pinMode(LED_WhiteB, OUTPUT);
  pinMode(LED_WhiteC, OUTPUT);
  pinMode(button_A, INPUT);
  pinMode(button_B, INPUT);
  
  
  
}

byte LEDCOUNTER = 0;


void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(button_A) == HIGH && LEDCOUNTER == 0) {
 digitalWrite(LED_Red, HIGH);
 digitalWrite(LED_Green, LOW);
 digitalWrite(LED_yellow, LOW);
delay(500);

 LEDCOUNTER++;

}
if (digitalRead(button_A) == HIGH && LEDCOUNTER == 1) 

{
  digitalWrite(LED_Red, HIGH);
  digitalWrite(LED_Green, HIGH);
  digitalWrite(LED_yellow, LOW);
  LEDCOUNTER++;
  delay(500);
  /* code */
}

if (digitalRead(button_A) == HIGH && LEDCOUNTER == 2) {
  digitalWrite(LED_Red, HIGH);
  digitalWrite(LED_Green, HIGH);
  digitalWrite(LED_yellow, HIGH);
   digitalWrite(LED_Red, HIGH);
    delay(300);
    digitalWrite(LED_Red, LOW);
    
  digitalWrite(LED_Green, HIGH);
  delay(300);
  digitalWrite(LED_Green, LOW);
  delay(300);
  digitalWrite(LED_yellow, HIGH);
  delay(300);
  digitalWrite(LED_yellow, LOW);
  digitalWrite(LED_Red, HIGH);
    delay(300);
    digitalWrite(LED_Red, LOW);
    delay(300);
     digitalWrite(LED_Green, HIGH);
  delay(300);
  digitalWrite(LED_Green, LOW);
  delay(300);
digitalWrite(LED_yellow, HIGH);
  delay(300);
  digitalWrite(LED_yellow, LOW);

  LEDCOUNTER++;
  delay(500);
  /* code */
}






if (digitalRead(button_B) == HIGH && LEDCOUNTER == 3) {
  digitalWrite(LED_WhiteA, HIGH);
  digitalWrite(LED_WhiteB, LOW);
  digitalWrite(LED_WhiteC, LOW);
  LEDCOUNTER++;
  delay(500);
  /* code */
}
delay(100);

if (digitalRead(button_B) == HIGH && LEDCOUNTER == 4) {
    digitalWrite(LED_WhiteA, HIGH);
    digitalWrite(LED_WhiteB, HIGH);
    digitalWrite(LED_WhiteC, LOW);
    LEDCOUNTER++;
  delay(500);
  

}
delay(10);

if (digitalRead(button_B) == HIGH && LEDCOUNTER == 5)
{
  digitalWrite(LED_WhiteA, HIGH);
  digitalWrite(LED_WhiteB, HIGH);
  digitalWrite(LED_WhiteC, HIGH);

  digitalWrite(LED_WhiteA, HIGH);
  delay(300);
  digitalWrite(LED_WhiteA, LOW);
  delay(300);
  digitalWrite(LED_WhiteB, HIGH);
  delay(300);
  digitalWrite(LED_WhiteB, LOW);
  delay(300);
  digitalWrite(LED_WhiteC, HIGH);
  delay(300);
  digitalWrite(LED_WhiteC, LOW);
  delay(300);
  digitalWrite(LED_WhiteA, HIGH);
  delay(300);
  digitalWrite(LED_WhiteA, LOW);
  delay(300);
  digitalWrite(LED_WhiteB, HIGH);
  delay(300);
  digitalWrite(LED_WhiteB, LOW);
  delay(300);
  digitalWrite(LED_WhiteC, HIGH);
  delay(300);
  digitalWrite(LED_WhiteC, LOW);
  

  LEDCOUNTER++;
  
  
}
delay(10);






 
}
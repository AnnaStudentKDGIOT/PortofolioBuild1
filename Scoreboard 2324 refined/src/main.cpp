#include <Arduino.h>

#define LED_Red 5
#define LED_Green 8
#define LED_yellow 10

#define LED_redA 6
#define LED_greenB 9
#define LED_blueC 11

#define button_A 3
#define button_B 4
#define button_reset 2



const int BUTTON_RESET = 2;
int score = 0; 
byte LEDCOUNTER = 0;

// unsigned long previousMillis = 0;
// const long interval = 500;

void resetScore() {
  score = 0;
}
void setup() {
  pinMode(LED_Red, OUTPUT);
  pinMode(LED_Green, OUTPUT);
  pinMode(LED_yellow, OUTPUT);
  pinMode(LED_redA, OUTPUT);
  pinMode(LED_greenB, OUTPUT);
  pinMode(LED_blueC, OUTPUT);
  pinMode(button_A, INPUT);
  pinMode(button_B, INPUT); 
  pinMode(button_reset, INPUT_PULLUP);
}

void loop() {

// reset knop alle leds gaan af 
  if (digitalRead(button_reset) == HIGH) {
  resetScore();
  delay(500);
  digitalWrite(LED_Red, LOW);
    digitalWrite(LED_Green, LOW);
    digitalWrite(LED_yellow, LOW);
    digitalWrite(LED_redA, LOW);
    digitalWrite(LED_greenB, LOW);
    digitalWrite(LED_blueC, LOW);
  
  }
  

//  een punt
if (digitalRead(button_A) == HIGH && LEDCOUNTER == 0){
  digitalWrite(LED_Red, HIGH);
    digitalWrite(LED_Green, LOW);
    digitalWrite(LED_yellow, LOW); 
    delay(300);
  
    }
    
    // twee punten 
if (digitalRead(button_A) == HIGH && LEDCOUNTER == 1){
    digitalWrite(LED_Red, HIGH);
    digitalWrite(LED_Green, HIGH);
    digitalWrite(LED_yellow, LOW); 
    delay(300);
    

    }

    // drie punten bij iteratie 2
if (digitalRead(button_A) == HIGH && LEDCOUNTER == 2) {  
     digitalWrite(LED_Red, HIGH);
    digitalWrite(LED_Green, HIGH);
    digitalWrite(LED_yellow, HIGH);  
    
    delay(300);
    }

//  andere team 1 punt bij iteratie 3
if (digitalRead(button_B) == HIGH && LEDCOUNTER == 3){
     digitalWrite(LED_redA, HIGH);
    digitalWrite(LED_greenB, LOW);
    digitalWrite(LED_blueC, LOW); 
    
    delay(300);
    }
    // 2 punten bij iteratie 4
 if (digitalRead(button_B) == HIGH && LEDCOUNTER == 4){
     digitalWrite(LED_redA, HIGH);
    digitalWrite(LED_greenB, HIGH);
    digitalWrite(LED_blueC, LOW); 
    
    delay(300);
    }
    // 3 punten bij iteratie 5
     if (digitalRead(button_B) == HIGH && LEDCOUNTER == 5) {
     digitalWrite(LED_redA, HIGH);
    digitalWrite(LED_greenB, HIGH);
    digitalWrite(LED_blueC, HIGH);  
    
    delay(300);
    }  



LEDCOUNTER = 0;



}
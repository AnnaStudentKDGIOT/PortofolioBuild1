#include <Arduino.h>
#define Led_GreenA 3
#define Led_Yellow 2
#define Led_RedA   4
#define Button_A   5
#define Button_B   6

int Ledstate = 0; //
 // 1 second delay between turning off LEDs

void setup() {
  pinMode(Led_GreenA, OUTPUT);
  pinMode(Led_Yellow, OUTPUT);
  pinMode(Led_RedA, OUTPUT);
  pinMode(Button_A, INPUT);
  pinMode(Button_B, INPUT);
}

void loop() {
  if (digitalRead(Button_A) == HIGH && Ledstate == 0) {
    digitalWrite(Led_GreenA, HIGH );
    delay(200);
    Ledstate++;
  }
  if (digitalRead(Button_A) == HIGH && Ledstate == 1) {
    digitalWrite(Led_Yellow,HIGH );
    delay(200);
    Ledstate++;
    
  }
  if (digitalRead(Button_A) == HIGH && Ledstate == 2) {
    digitalWrite(Led_RedA,HIGH );
    delay(200);
    Ledstate++;
  }
  if (digitalRead(Button_B) == HIGH && Ledstate == 3) {
      digitalWrite(Led_RedA, LOW);
      delay(200);
      Ledstate++;
      
  }
  if (digitalRead(Button_B) == HIGH && Ledstate == 4) {
      digitalWrite(Led_Yellow, LOW);
      delay(150);
      Ledstate++;
     
  }
  if (digitalRead(Button_B) == HIGH && Ledstate == 5 ) {
    digitalWrite(Led_GreenA, LOW );
    delay(100);
    Ledstate++;
    
  }
  
  
  
  
  
  
  
  }
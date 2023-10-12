#include <Arduino.h>



#define potentiometerpin A0
#define drukknop1 2
#define drukknop2 3

boolean drukknopstate;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(drukknop1, INPUT);
  pinMode(drukknop2, INPUT);

  
  
}

void loop() {
  // put your main code here, to run repeatedly:

 
 
 
 
 
  if (digitalRead(drukknop1) == HIGH) {

  Serial.println("drukknop1 is ingedrukt");
    /* code */
  }
  
  delay(10);


  if (digitalRead(drukknop2) == HIGH) {

    Serial.println("drukknop2 is ingedrukt");
    
  }

      








digitalRead(drukknop2);


  
}
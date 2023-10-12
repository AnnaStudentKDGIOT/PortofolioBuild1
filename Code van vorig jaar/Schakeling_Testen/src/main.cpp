#include <Arduino.h>

#define drukknop1 2
#define drukknop2 3

void setup() {


    Serial.begin(9600);
  pinMode(drukknop1, INPUT);
  pinMode(drukknop2, INPUT);


  // put your setup code here, to run once:
}

void loop() {

  if (digitalRead(drukknop1) == HIGH) {



  Serial.print(digitalRead(drukknop1));

    /* code */
  }

  if (digitalRead(drukknop2) == HIGH) {

  Serial.print(digitalRead(drukknop2));
  
    
  }
  
  
  // put your main code here, to run repeatedly:
}
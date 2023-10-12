#include <Arduino.h>
#include <Servo.h>

#define PirSensor 4

Servo myservo;
int pos = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myservo.attach(5); 
  pinMode(PirSensor,INPUT);



}

void loop() {

digitalRead(PirSensor);

if ( digitalRead(PirSensor) == LOW)
{
 
 
 
 myservo.write(0);


  
}
else if (digitalRead(PirSensor) == HIGH)
{
  
  myservo.write(90);
   

}
  // put your main code here, to run repeatedly:
}
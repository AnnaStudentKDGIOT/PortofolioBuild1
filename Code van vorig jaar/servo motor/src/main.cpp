#include <Arduino.h>
#include <Servo.h>

#define potentiometer A1

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(5); 
   // attaches the servo on pin 9 to the servo object
   pinMode(potentiometer, INPUT);
   Serial.begin(9600);
}

void loop() {
 pos = analogRead(potentiometer);
 pos = map(pos, 0, 1023, 0, 180);
 myservo.write(pos);
 
 Serial.println("positions: ");
 Serial.print(pos);
}
#include <Arduino.h>
#include <Servo.h>

Servo servo;

void setup() {
  // put your setup code here, to run once:
  servo.attach(2);
  servo.write(0);

}

void loop() {
  // put your main code here, to run repeatedly:
  servo.write(180);
}

// put function definitions here:


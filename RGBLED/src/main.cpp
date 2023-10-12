#include <Arduino.h>

#define RGB_Blue A1 
#define RGB_Green A2
#define RGB_red A3
#define buttonA 3
#define buttonB 4
#define buttonc 5

// put function declarations here:


void setup() {
  pinMode(RGB_Blue, OUTPUT);
  pinMode(RGB_Green, OUTPUT);
  pinMode(RGB_red, OUTPUT);
  
}

// void setcolor(int red, int green, int blue) {
//   analogWrite(RGB_Blue,blue);
//   analogWrite(RGB_Green,green);
//   analogWrite(RGB_red,red);}
void loop() {


if (digitalRead(buttonA) == HIGH)
{
      analogWrite(RGB_red,0);
      analogWrite(RGB_Green,255);
      analogWrite(RGB_Blue,0);
} 
if (digitalRead(buttonB) == HIGH)
{
  analogWrite(RGB_Green, 0);
  analogWrite(RGB_Blue, 255);
  analogWrite(RGB_red,0);
}

if (digitalRead(buttonc) == HIGH)
{
  analogWrite(RGB_Green, 0);
  analogWrite(RGB_Blue, 0);
  analogWrite(RGB_red,255);
}




 
  


  
  
  
  


  
}


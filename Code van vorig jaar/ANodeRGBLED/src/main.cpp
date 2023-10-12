#include <Arduino.h>



#define RED  4  // pin that red led is connected to    
#define GREEN  5 // pin that green led is connected to     
#define BLUE  6  // pin that blue led is connected to    
#define DELAY  5000  // internal delay in ms
#define potentiometer1 A1
#define potentiometer2 A2
#define potentiometer3 A3


int redVal, greenVal, blueVal; //RGB component values

void setup() {
  //Pin definitions
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  
  pinMode(potentiometer1, INPUT);
  pinMode(potentiometer2, INPUT);
  pinMode(potentiometer3, INPUT);

  Serial.begin(9600);
}

void loop() {
  //Reading potentiometer values
  //When the pot is in the leftmost position, the voltage reading is 0
  redVal = analogRead(potentiometer1)/4;
  greenVal = analogRead(potentiometer2)/4;
  blueVal = analogRead(potentiometer3)/4;

  //Sets the individual colors with the pot values
  analogWrite(RED, redVal);
  analogWrite(GREEN, greenVal);
  analogWrite(BLUE, blueVal);

  delay(50);

  //Printing the values of Red, Green and Blue in a single line
  Serial.print("R: "); Serial.print(redVal);
	//The \t character creates a tab space between colors
  Serial.print("\tG: "); Serial.print(greenVal);
	//Final value is Serial.println to create a new line between readings  
  Serial.print("\tB: "); Serial.println(blueVal); 
}
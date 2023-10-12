#include <Arduino.h>

# define BUTTON1 5
# define BUTTON2 6
# define LED1 4 
# define LED2 3


unsigned long startpoint = 0;

unsigned long startpoint2 = 0;
void setup() {
  // put your setup code here, to run once:

  pinMode(BUTTON1, INPUT);
  pinMode(BUTTON2, INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  if (digitalRead(BUTTON1) == HIGH)
  {
    digitalWrite(LED1, HIGH);
    startpoint = millis();
    }

  if (digitalRead(BUTTON2) == HIGH)
  {
    digitalWrite(LED2, HIGH);
    startpoint2 = millis();
    
  }




if ( (startpoint + 10000) < millis())
{
  /* code */
  digitalWrite(LED1, LOW);
}

if ( (startpoint2 + 5000) < millis())
{
  /* code */
  digitalWrite(LED2, LOW);
}

  
}
#include <Arduino.h>
#include <Buzzer.h>
#include <Photosensor.h>


#define LED_RED 4
#define LED_GREEN 3
// #define Buzzer 2
#define Photosensor A3

// put function declarations here:

int analogVal = 0;
bool resetflag = false;
unsigned long previousMillis = 0;
unsigned long interval = 5000;



Buzzer buzzer(2,23);
void setup() {
  // put your setup code here, to run once:

 

  Serial.begin(9600);
pinMode(LED_GREEN, OUTPUT);
pinMode(LED_RED, OUTPUT);
// pinMode(Buzzer, OUTPUT);  
}

void loop() {
  
Buzzer buzzer(2,23);
  buzzer.begin(10);
  int time = 500;
   unsigned long currentMillis = millis();
    if (resetflag) {
    resetflag = false;
    
  }

analogVal = analogRead(Photosensor);
Serial.println(analogVal);

  if (analogVal < 25 && currentMillis - previousMillis >= interval)
  {
    Serial.println("- dark");
    delay(1000);
    Serial.println(analogVal);
    digitalWrite(LED_GREEN, HIGH);
    digitalWrite(LED_RED, LOW);
    resetflag = true;
  }
  else if (analogVal < 400 && currentMillis - previousMillis >= interval)
  {

    Serial.println("- light");
    delay(1000);
    Serial.println(analogVal);
    digitalWrite(LED_GREEN, HIGH);
    digitalWrite(LED_RED, LOW);
    resetflag = true;
  } else if (analogVal > 800 && currentMillis - previousMillis >= interval) {
    Serial.println("Too much light");
    delay(1000);
    Serial.println(analogVal);
    digitalWrite(LED_GREEN, LOW);
    digitalWrite(LED_RED, HIGH);
    buzzer.sound(NOTE_E3, time /2);
  }
}
  void resetState(){
    digitalWrite(LED_GREEN, LOW);
    digitalWrite(LED_RED,LOW);
    buzzer.end(0);
  }

// put function definitions here:

#include <Arduino.h>

#define BUTTON1 5
#define LED1 2
#define BUTTON2 6
#define LED2 7
#define LED3 8
#define LED4 10
#define LED5 9
#define LED6 11

boolean Ledstate_1 = 0;
boolean Ledstate_2 = 0;

void setup()
{
  pinMode(LED1, OUTPUT);
  pinMode(BUTTON1, INPUT);
  pinMode(LED2, OUTPUT);
  pinMode(BUTTON2, INPUT);
  pinMode(LED3, OUTPUT);

  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
}

// if (digitalRead(BUTTON1) == HIGH) {
//   digitalWrite(LED1, HIGH);

//   delay(200);

//  }  if (digitalRead(BUTTON1) == HIGH ) {
//   digitalWrite(LED1, LOW);

//   delay(200);

//  } if (digitalRead(BUTTON2) == HIGH ) {
//   digitalWrite(LED2, HIGH);

//   delay(200);}

//    if (digitalRead(BUTTON2) == HIGH ) {
//   digitalWrite(LED2, LOW);

//   delay(200);

//  }

//  if (digitalRead(BUTTON1) == HIGH )
//  {digitalWrite(LED3 ,HIGH);

//  delay(200);

//  } if (digitalRead(BUTTON1) == HIGH )

//  {
//   digitalWrite(LED3, LOW);

//   delay(200);

//   /* code */
//  }

//  if (digitalRead(BUTTON2) == HIGH && Ledstate_2 == 0)

//  {
//   digitalWrite(LED4, HIGH);
//   Ledstate_2 = 1;
//   delay(200);

//   /* code */
//  } if (digitalRead(BUTTON2) == HIGH && Ledstate_2 == 1)
//  {
//   digitalWrite(LED4, LOW);
//   Ledstate_2 = 0;
//   delay(200);
//  }

//  if (digitalRead(BUTTON2) == HIGH && Ledstate_1== 0){
//   digitalWrite(LED5, HIGH);
//   Ledstate_1 = 1;
//   delay(200);
//  } if (digitalRead(BUTTON2) == HIGH && Ledstate_1== 1){

//   digitalWrite(LED5, LOW);
//   Ledstate_1 = 0;
//   delay(200); }

//  if (digitalRead(BUTTON2) == HIGH && Ledstate_1== 0){
//   digitalWrite(LED6, HIGH);
//   Ledstate_1 = 1;
//   delay(200);
//  } if (digitalRead(BUTTON2) == HIGH && Ledstate_1== 1){

//   digitalWrite(LED6, LOW);
//   Ledstate_1 = 0;
//   delay(200);

void loop()
{
  // if (digitalRead(BUTTON1) == HIGH && Ledstate_1== 0)
  // {
  //   digitalWrite(LED1, HIGH);
  //   delay(200);
  //   digitalWrite(LED2, HIGH);
  //   delay(200);
  //   digitalWrite(LED3, HIGH);
  //   delay(200);
  //   digitalWrite(LED4, HIGH);
  //   delay(200);
  //   digitalWrite(LED5, HIGH);
  //   delay(200);
  //   digitalWrite(LED6, HIGH);
  //   delay(200);
  //   Ledstate_1 = 1;
    
    
  // }  if (digitalRead(BUTTON1) == LOW && Ledstate_1 == 1)
  // {
  //   /* code */
  //   digitalWrite(LED1, LOW);
  //   delay(200);
  //   digitalWrite(LED2, LOW);
  //   delay(200);
  //   digitalWrite(LED3, LOW);
  //   delay(200);
  //   digitalWrite(LED4, LOW);
  //   delay(200);
  //   digitalWrite(LED5, LOW);
  //   delay(200);
  //   digitalWrite(LED6, LOW);
  //   Ledstate_1 = 0;
  // }


  if (digitalRead(BUTTON1) == HIGH && Ledstate_1 == 0)

  {
    digitalWrite(LED1, HIGH);
    
    digitalWrite(LED2, HIGH);
    
    digitalWrite(LED3, HIGH);
    Ledstate_1 = 1;
    
  
  } 
  
  if (digitalRead(BUTTON1) == LOW && Ledstate_1 == 1)

  {
    /* code */
    digitalWrite(LED1, LOW);
    
    digitalWrite(LED2, LOW);
    
    digitalWrite(LED3, LOW);
    
    Ledstate_1 = 0;
    
  }
  
  

  delay(200);

  if (digitalRead(BUTTON2) == HIGH && Ledstate_2 == 0) 

  {
    digitalWrite(LED4, HIGH);
    
    digitalWrite(LED5, HIGH);
    
    digitalWrite(LED6, HIGH);
    
    Ledstate_2 = 1;
  


  } 
  
  if (digitalRead(BUTTON2) == LOW && Ledstate_2 == 1)

  {
    /* code */
    digitalWrite(LED4, LOW);
    
    digitalWrite(LED5, LOW);
    
    digitalWrite(LED6, LOW);
    
    Ledstate_2 = 0;
    delay(20000);

   
    

  }

  if (digitalRead(BUTTON2) == HIGH && Ledstate_2 == 0)
  {
    digitalWrite(LED1, HIGH);
    delay(200);
    digitalWrite(LED2, LOW);
    delay(200);
    digitalWrite(LED3, HIGH);
    delay(200);
    digitalWrite(LED4, LOW);
    delay(200);
    digitalWrite(LED5, HIGH);
    delay(200);
    digitalWrite(LED6, LOW);
    delay(200);
    Ledstate_2 = 1;
    
  }
   if (digitalRead(BUTTON1) == HIGH && Ledstate_2 == 0)
  {
    digitalWrite(LED1, LOW);
    delay(200);
    digitalWrite(LED2, HIGH);
    delay(200);
    digitalWrite(LED3, LOW);
    delay(200);
    digitalWrite(LED4, HIGH);
    delay(200);
    digitalWrite(LED5, LOW);

    delay(200);
    digitalWrite(LED6, HIGH);
    delay(200);
    Ledstate_2 = 1;
    
  }

  

  
  }
  


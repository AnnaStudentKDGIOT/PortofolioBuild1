#include <Arduino.h>
#include <Servo.h>
#include <DHT_U.h>
#include <Wire.h>
#include <U8g2lib.h>
#include <floatToString.h>
#include <monitor_printf.h>
// #include <Buzzer.h>
#include <Adafruit_I2CDevice.h>



U8G2_SSD1306_128X64_NONAME_F_SW_I2C u8g2(U8G2_R0, /* clock=*/ SCL, /* data=*/ SDA, /* reset=*/ U8X8_PIN_NONE);    //Software I2C



// Define pins for RGB LED
#define RedPin A0
#define GreenPin A1
#define BluePin A2
// #define purplepin A3
// #define brownpin A4
// #define graypin A5

// #define LED_RED 5
// #define LED_GREEN 6
// #define LED_BLUE 7

// Define pins for buttons
#define Button1Pin 2
#define Button2Pin 5
#define Button3Pin 4

// Buzzer buzzer(1,13);
// Define pin for PIR motion sensor
#define PIRPin 8
// Define pin for buzzer
// #define BuzzerPin 
// Define DHT22 sensor details
#define DHT22Pin 12
#define DHTType DHT22
DHT dht(DHT22Pin, DHTType, DHT22);
Servo doorServo;
unsigned long previousMillis = millis();
/// @brief 
const long interval = 1100;
// #define screen_width 128
// #define screen_height 64
// #define oled_reset -1

// void buttonPress1() { 
//     digitalWrite(LED_RED, HIGH);
//     digitalWrite(LED_BLUE, LOW);
//     digitalWrite(LED_GREEN, LOW); }
    
// void buttonPress2() { 
    
//     digitalWrite(LED_BLUE, HIGH);
//      digitalWrite(LED_RED, HIGH);
//      digitalWrite(LED_GREEN, LOW);
//      }
// void buttonPress3() { 
   
//     digitalWrite(LED_GREEN, HIGH);
    
//     digitalWrite(LED_BLUE, HIGH);
//      digitalWrite(LED_RED, HIGH);
// }

 void turnOffRGB() {
    analogWrite(RedPin, 0);
    analogWrite(GreenPin, 0);
    analogWrite(BluePin, 0);
   
}

void setRGBColor(int red, int green, int blue) {
    analogWrite(RedPin, red);
    analogWrite(GreenPin, green);
    analogWrite(BluePin, blue);
    
}
    
// void turnoffleds(){
//     digitalWrite(LED_GREEN, LOW);
//     digitalWrite(LED_BLUE, LOW);
//     digitalWrite(LED_RED, LOW);
// }
void controlLEDs() {
unsigned long currentMillis = millis();



if (digitalRead(Button1Pin) == LOW) { // Button 1 is pressed
    setRGBColor(255, 0, 0);  // Red
    Serial.println("Button 1 is pressed");
    previousMillis = currentMillis;
  } else if (digitalRead(Button2Pin) == LOW) { // Button 2 is pressed
    setRGBColor(50, 255, 75);  // Some other color
    Serial.println("Button 2 is pressed");
    previousMillis = currentMillis;
  } else if (digitalRead(Button3Pin) == LOW) { // Button 3 is pressed
    setRGBColor(0, 0, 255);  // Blue
    Serial.println("Button 3 is pressed");
    previousMillis = currentMillis;
  } else {
    if (currentMillis - previousMillis > interval) {
      turnOffRGB();
    }
  }
}




     // what i want to do is configure a 4th pressbutton to be the sole button which turns off the RGB LEDS 
// Function to read temperature and humidity from DHT22 sensor it currently print the temperature and humidity successfully in the serial monitor 
void readDHT() {
    float humidity = dht.readHumidity();
    float temperature = dht.readTemperature();
    Serial.print("Humidity: ");
    Serial.print(humidity);
    Serial.print(" %, Temp: ");
    Serial.print(temperature);
    Serial.println(" Celsius");
        u8g2.clearBuffer();                   // clear the internal memory
  u8g2.setFont(u8g2_font_princess_te);  
  u8g2.setFont(u8g_font_helvB08);
  u8g2.setFont(u8g_font_4x6); // choose a suitable font
  u8g2.setCursor(0,100);
  u8g2.print(humidity);
  u8g2.print(temperature);
 // write something to the internal memory
  u8g2.sendBuffer();                    // transfer internal memory to the display
  delay(100); 
    
   
  } 
  // void printTemperatureONscreen() {
    
  //    u8g2.clearBuffer();                   // clear the internal memory
  // u8g2.setFont(u8g2_font_princess_te);  
  // u8g2.setFont(u8g_font_helvB08);
  // u8g2.setFont(u8g_font_4x6);
  // // u8g2.drawStr(dht.readHumidity(),dht.readTemperature(),); // choose a suitable font
  // u8g2.drawStr(0,11,"the quick brown fox jumps");    // write something to the internal memory
  //   u8g2.drawStr(0,25, "over the lazy dog ");

  
    
  //     // write something to the internal memory
  // u8g2.sendBuffer();                    // transfer internal memory to the display
  // delay(100);  

  // }

// Function to control the servo motor based on PIR motion sensor
void controlServo() {
    int motion = digitalRead(PIRPin);
    if (motion == HIGH) {
        Serial.println("Open the door");
        doorServo.write(150);
    } else {
        Serial.println("Close the door");
        doorServo.write(0);
    }
}
// void verassingingslied() {
//   int time = 500;
//   buzzer.sound(NOTE_B4, time / 2);
//   buzzer.sound(NOTE_A4, time / 2);
//   buzzer.sound(NOTE_E5, time / 2);
//   buzzer.sound(NOTE_G2, time / 2);
//   buzzer.sound(NOTE_F3, time / 2);
//   buzzer.sound(NOTE_GS3, time / 2);
//   buzzer.sound(NOTE_B4, time / 2);
//   buzzer.sound(NOTE_D5, time / 2);
// }

void setup() {
    // Initialize pins and sensors
    // pinMode(LED_BLUE, OUTPUT);
    // pinMode(LED_GREEN, OUTPUT);
    // pinMode(LED_RED, OUTPUT);
    pinMode(Button1Pin, INPUT_PULLUP);
    pinMode(Button2Pin, INPUT_PULLUP);
    pinMode(Button3Pin, INPUT_PULLUP);
    pinMode(PIRPin, INPUT);
    // pinMode(BuzzerPin, OUTPUT);
    doorServo.attach(9);
    doorServo.write(0); // Initialize the servo position
    u8g2.begin(); //
    dht.begin();
    Serial.begin(9600);
    Wire.begin();
    // buzzer.begin(10);
}

void loop() {
    // Call functions to control components
    controlLEDs();
    readDHT();
    controlServo();
    // verassingingslied();
}






//AUB DOET DIT NIET WEG DIT IS MIJN CODE KLADBLOK    VANAF DEZEREGEL  IS ALLES DAT HIER STAAT ON AFGEWERKT.
//


// bronnen voor extra stukjes code en tutorials https://arduinogetstarted.com/tutorials/arduino-temperature-humidity-sensor-lcd
// RGB leds https://arduinogetstarted.com/tutorials/arduino-rgb-led
// de rest van de opgedande kennis komt uit de Canvas cursus en voorbeeldcode van thomas de witte.

// U8G2_SSD1306_128X64_NONAME_F_SW_I2C u8g2(U8G2_R0, /* clock=*/ SCL, /* data=*/ SDA, /* reset=*/ U8X8_PIN_NONE);    //Software I2C



// original code voor leds        int buttonstate = digitalRead(Button1Pin);
//      int buttonstate2 = digitalRead(Button2Pin);
//      int buttonstate3 = digitalRead(Button3Pin);
//     int buttonstate4 = digitalRead(Button4Pin);
//     byte ledcounter = analogRead(RedPin) && analogRead(GreenPin) && analogRead(BluePin) == 0; 
    
//     if (buttonstate == LOW)
//     {
//         setRGBColor(250,0,128);
//     ledcounter++;

//     } 
//     if ( buttonstate2 == LOW)
//     {
//          setRGBColor(0,88,128);
//     ledcounter++;
//     }

//  if (buttonstate3 == LOW)
//  {
//     setRGBColor(0,0,255);
//     ledcounter++;
//  }

// if (buttonstate4 == LOW)
// {
    
//      analogWrite(RedPin, 0);
//     analogWrite(GreenPin, 0);
//     analogWrite(BluePin, 0);

// }
// // Function to set RGB LED color
// void setRGBColor(int red, int green, int blue) {
//     analogWrite(RedPin, red);
//     analogWrite(GreenPin, green);
//     analogWrite(BluePin, blue);
//     delay(2000);
// }
// void setRGBColor2(int purple, int brown, int gray) {
//     analogWrite(purplepin, purple);
//     analogWrite(graypin, gray);
//     analogWrite(brownpin, brown);
// }
// // Function to turn off RGB LEDs
// void turnOffRGB() {
//     analogWrite(RedPin, 0);
//     analogWrite(GreenPin, 0);
//     analogWrite(BluePin, 0);
//     // analogWrite(purplepin, 0);
//     // analogWrite(graypin, 0);
//     // analogWrite(brownpin, 0);
// }

// Function to control RGB LEDs based on button presses

// verassing function Nog af te werken in fucntie van tijdsbeschikbaarheid
// void Verassinglied() {
//   int motionDoor = digitalRead(PIRPin);

//   // int C = 261;
//   // int D = 293;
//   // int E = 329;
//   // int G = 391;

//   int melody[] = { 293, 329, 391, 440, 493};

//   int achtse = 500/2;
//   // int kwart = 1000/2;
//   // int half = 2000/2;

//   // if (motionDoor==HIGH) {
   
//   //  for (int i = 0; i > sizeof(melody) / sizeof(melody[0]); i++)
//   //  {
//   //   tone(BuzzerPin, melody[i], 150 *2);
//   //   delay(achtse);
//   //  }
   



//   // }
// }
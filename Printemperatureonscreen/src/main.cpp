#include <Arduino.h>
#include <U8g2lib.h>
#include <DHT_U.h>
#include <Wire.h>


// put function declarations here:

#define DHT22Pin 12
#define DHTType DHT22
DHT dht(DHT22Pin, DHTType, DHT22);
U8G2_SSD1306_128X64_NONAME_F_SW_I2C u8g2(U8G2_R0, /* clock=*/ SCL, /* data=*/ SDA, /* reset=*/ U8X8_PIN_NONE);    //Software I2C

void setup() {
  // u8g2.begin();
  // Wire.begin();
  Serial.begin(9600);

}

// void readDHT() {
// //     float humidity = dht.readHumidity();
// //     float temperature = dht.readTemperature();
// //     Serial.print("Humidity: ");
// //     Serial.print(humidity);
// //     Serial.print(" %, Temp: ");
// //     Serial.print(temperature);
// //     Serial.println(" Celsius");
// // //         u8g2.clearBuffer();                   // clear the internal memory
// // //   u8g2.setFont(u8g2_font_princess_te);  
// // //   u8g2.setFont(u8g_font_helvB08);
// // //   u8g2.setFont(u8g_font_4x6); // choose a suitable font
// // //   u8g2.setCursor(0,100);
// // //   u8g2.print(humidity);
// // //   u8g2.print(temperature);
// // //  // write something to the internal memory
// // //   u8g2.sendBuffer();                    // transfer internal memory to the display
// //   delay(100); 
    
   
//   } 

void loop() {
  // put your main code here, to run repeatedly:
  
    float humidity = dht.readHumidity();
    float temperature = dht.readTemperature();
    Serial.print("Humidity: ");
    Serial.print(humidity);
    Serial.print(" %, Temp: ");
    Serial.print(temperature);
    Serial.println(" Celsius");
    delay(1000);
}

// put function definitions here:

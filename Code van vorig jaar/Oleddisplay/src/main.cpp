
#include <Arduino.h>
#include <U8g2lib.h>
#include <Wire.h>

U8G2_SSD1306_128X64_NONAME_F_SW_I2C u8g2(U8G2_R0, /* clock=*/ SCL, /* data=*/ SDA, /* reset=*/ U8X8_PIN_NONE);    //Software I2C

void setup(void) {
  u8g2.begin();
}

void loop(void) {
  u8g2.clearBuffer();                   // clear the internal memory
  u8g2.setFont(u8g2_font_princess_te);  
  u8g2.setFont(u8g_font_helvB08);
  u8g2.setFont(u8g_font_4x6); // choose a suitable font
  u8g2.drawStr(0,11,"the quick brown fox jumps");    // write something to the internal memory
    u8g2.drawStr(0,25, "over the lazy dog ");

  
    
      // write something to the internal memory
  u8g2.sendBuffer();                    // transfer internal memory to the display
  delay(100);  
}
/*
 * TomatoClock Main Program
 * Wiring: See hardware schematics
 * Author: yangshunhuai
 * Revision: 1.0
 */

#include <U8g2lib.h>
#include <OneButton.h>
#include "tones.h"

// Device pins
#define BTNLEFT    PA4
#define BTNENTER   PA5
#define BTNRIGHT   PA6
#define BUZZER     PB1
#define US_TRIG    PA7
#define US_ECHO    PB0

// Devices
U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);
OneButton btnleft(BTNLEFT, false);
OneButton btnenter(BTNENTER, false);
OneButton btnright(BTNRIGHT, false);

void setup() {
  // Configure pins
  pinMode(BUZZER, OUTPUT);
  pinMode(US_TRIG, OUTPUT);
  pinMode(US_ECHO, INPUT);
  // Configure devices
  u8g2.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  tone(BUZZER, 1000, 20);
}

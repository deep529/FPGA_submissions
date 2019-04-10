/*
 The circuit connections:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD DB4 pin to digital pin 5
 * LCD DB5 pin to digital pin 4
 * LCD DB6 pin to digital pin 3
 * LCD DB7 pin to digital pin 2
 * LCD R/W pin to ground
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)
*/

// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
int number_to_display = 0;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  
  lcd.setCursor(0,0);
  lcd.print("hello, world!");
  delay(500);
  lcd.setCursor(0,1);
}

void loop() {
  display_on_lcd(number_to_display);
  number_to_display++;
  delay(500);
}

void display_on_lcd(int num) {
  lcd.setCursor(0,1);
  lcd.print(num);
}

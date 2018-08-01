/*
  This codes 
 Demonstrates the use a 8x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the 
 Hitachi HD44780 driver. 
 
 This sketch counts every second an prints "the count is" on the first line, and
 the value of the count on the second. 
 
 The circuit:
 * LCD RS pin to digital pin 7
 * LCD Enable pin to digital pin 8
 * LCD D4 pin to digital pin 9
 * LCD D5 pin to digital pin 10
 * LCD D6 pin to digital pin 11
 * LCD D7 pin to digital pin 12
 * LCD R/W pin to ground
 * 10K pot:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)
 
modified for 8 x 2 LCD July 30 2013 M. Liva

 */

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

int count = 0; //sets the variable "count" to zero

void setup() {
  // set up the LCD's number of columns and rows: 
  lcd.begin(8, 2);
  lcd.setCursor(0,0); // go to first row and first cloumn
  lcd.print("Count is"); // print first line
}

void loop() {
    
  
  lcd.setCursor(2,1); //go to second line
  lcd.print(count); //prints the count on the second line
  count = count + 1; // increments count
  delay(1000);

}

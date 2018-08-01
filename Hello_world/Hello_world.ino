/*
  This codes is a modification of the LiquidCrystal Library - display() and noDisplay()
 example Code
 Demonstrates the use a 8x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the 
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface. (14 pins for the 8x2)
 
 This sketch prints "Hello World!" to the LCD and uses the 
 display() and noDisplay() functions to turn on and off
 the display.
 
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
 
 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe 
 modified 22 Nov 2010
 by Tom Igoe

 This example code is in the public domain.

 http://arduino.cc/en/Tutorial/LiquidCrystalDisplay

modified for 8 x 2 LCD July 30 2013 M. Liva

 */

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
  // set up the LCD's number of columns and rows: 
  lcd.begin(8, 2);
}

void loop() {
    
  lcd.setCursor(0,0); // go to first row and first cloumn
  lcd.print("hello"); // print first line
  lcd.setCursor(0,1); //go to second line
  lcd.print("world"); //print the second line
  // Turn off the display:
  lcd.noDisplay();
  delay(1000);
   // Turn on the display:
  lcd.display();
  delay(1000);
}

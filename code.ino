/*Interfacing 4x4 Keypad and 16x2 LCD to ArduinoMega 2560 and displaying keypad digit in  LCD 
 * 
 * Hardware Components:
 * ArduinoMega 2560
 * 4x4 Keypad
 * 16x2 LCD
 * 
 * Hardware Connection:
 * LCD is configured to work with 4bit mode
 * LCD D4 pin to digital pin 14 of ArduinoMega 
 * LCD D5 pin to digital pin 15 of ArduinoMega
 * LCD D6 pin to digital pin 16 of ArduinoMega
 * LCD D7 pin to digital pin 17 of ArduinoMega
 * LCD RS pin to digital pin 13 of ArduinoMega
 * LCD EN pin to digital pin 12 of ArduinoMega
 * LCD R/W pin is grounded
 * 
 *D5,D4,D3,D2 of ArduinoMega pins are connected to A, B, C, D row pin of keypad
 *D9,D8,D7,D6 of ArduinoMega pins are connected to 1, 2, 3, 4 column pin of keypad
 *D0,D1 of ArduinoMega pins are connected to TXD,RXD pin of Serial Monitor
 *
 * Author : Sahana B G
 * Date   : 30 Apr 2021
 *
 */

// Include the header file 
#include <Keypad.h>
#include <LiquidCrystal.h>

const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns
char keys[ROWS][COLS] = {
  {'7','8','9','/'},
  {'4','5','6','*'},
  {'1','2','3','-'},
  {'C','0','=','+'}
};
byte rowPins[ROWS] = {5, 4, 3, 2}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {9, 8, 7, 6}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

// Initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int RS = 13, EN = 12, D4 = 14, D5 = 15, D6 = 16, D7 = 17;
LiquidCrystal lcd(RS, EN, D4, D5, D6, D7);

void setup()
{
  
  // Set the serial baud rate 9600
  Serial.begin(9600);
  
  // Set up the LCD's number of columns and rows
  lcd.begin(16, 2);
  
  // Set cursor column 0, and row 0
  lcd.setCursor(0,0);
 }
  
void loop()
{
  // Read the key value
  char key = keypad.getKey();

  // If key is pressed
  if (key)
  {
    // Display in Serial monitor
    Serial.println(key);
    
    // Print the entered key in LCD.
    lcd.print(key);
  }
}

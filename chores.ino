#include <DS3231.h>

#include <LiquidCrystal.h>

#include <Wire.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
//push buttons
int up = 6;
int douwn = 7;
int back= 8;
int ok =9;

DS3231 Clock;

boolean century = false;
boolean h12;
boolean PM; 
byte ADay, AHour, AMinute, ASeconde, Abits;
boolean ADy, A12h, Apm;
int seconde, minute, hour, date, month, year, val;

String comdate= "";
int numdate[7] = {0}, mark = 0;

void setup() {
  // put your setup code here, to run once:
  Wire.begin();
  Serial.begin(9600);
  // setup the LCD's number of columns and rows;
  lcd.begin(16,2);
  // print a message to the LCD
  lcd.print("Hello world :) ");
  lcd.setCursor(0,1); // display

  // push buttons
  
}

void loop() {
  // put your main code here, to run repeatedly:
  

}

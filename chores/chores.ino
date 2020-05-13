#include <DS3231.h>

#include <LiquidCrystal.h>

#include <Wire.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
//push buttons
const int up = 6;
const int down = 7;
const int back= 8;
const int ok = 9;

int upState = 0;
int downState = 0;
int backState = 0;
int okState = 0;

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
  pinMode(up, INPUT);
  pinMode(down, INPUT);
  pinMode(back, INPUT);
  pinMode(ok, INPUT);
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
  upState = digitalRead(up);
  if (upState == HIGH) {
    lcd.clear();
    lcd.print("up");
  }
  else {
    lcd.clear();
    lcd.print("waiting...");
  }
  // put your main code here, to run repeatedly:
  

}

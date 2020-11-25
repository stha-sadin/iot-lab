#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup()
{ 
  lcd.begin(16, 2);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  lcd.print("RGB color Print");
}

void loop()
{ delay(1000);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  lcd.print("RED");
  delay(1000);
   lcd.clear();
   digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(8,LOW);
  lcd.print("BLUE");
  delay(1000);
  lcd.clear();
   digitalWrite(8,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  lcd.print("GREEN");
  delay(1000);
  lcd.clear();
}
/*#include <LiquidCrystal.h>

#include <LiquidCrystal.h>

#include<LiquidCrystal.h>
LiquidCrystal lcd(14,15,16,17,18,19);*/

#define sharp A0

void setup() {
  Serial.begin(9600);
  
   
  // put your setup code here, to run once:

}

void loop() {
  int val;
  val = analogRead(sharp);
 // int distance = map(val,0,1023,0,800);

  Serial.print("DISTANCE: ");
  Serial.print(" mm ");
  delay(1000);

  /*lcd.clear();
  lcd.print("DISTANCE:");
  lcd.setCursor(0,2);
   lcd.print(distance);
  lcd.setCursor(3,2);
  lcd.print("mm");
  delay(1000);*/
  
  
  // put your main code here, to run repeatedly:

}

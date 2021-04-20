#include<LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);

int derece;

void setup(){
  
  lcd.begin(16,2);
  
}
                 
void loop() {
  
  derece = map(((analogRead(A0)-20)*3.04),0,1023,-50,125);
  
  lcd.setCursor(0,0);

  lcd.print("Sicaklik");
  
  lcd.setCursor(0,1);
  
  lcd.print(derece);
  
  lcd.print(" C");
  
  delay(500);
  
  lcd.clear();
}                   

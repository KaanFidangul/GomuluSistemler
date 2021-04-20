#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int gaz;

void setup() {
  
  lcd.begin(16, 2);

}

void loop() {
  
  gaz = analogRead(A0);
  
  lcd.setCursor(0,0);
  
  lcd.print("Gaz :");
  
  lcd.setCursor(6,0);
  
  lcd.print(gaz);
  
  if( gaz >= 105) {
    
    lcd.setCursor(0,1);
    
    lcd.print("Tehlikeli");
    
  }
  
  else if( gaz >= 89) {
    
    lcd.setCursor(0,1);
    
    lcd.print("Uyari");
    
  }
  
  else {
    
    lcd.setCursor(0,1);
    
    lcd.print("Guvenli");
    
  }
  
  delay(500);
  
  lcd.clear();
  
}

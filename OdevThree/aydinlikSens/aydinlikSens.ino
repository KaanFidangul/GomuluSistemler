#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int isikPin = A0;

int aydinlik;

void setup() {

  lcd.begin(16, 2);

}

void loop() {

  aydinlik = analogRead(isikPin);
  
  if(aydinlik >= 500) {
    
    //lcd.setCursor(0,0);
    
    lcd.print("Gunduz");
    
  }
  
  else {
    
    lcd.print("Gece");
    
  }
  
  delay(500);
  
  lcd.clear();
}

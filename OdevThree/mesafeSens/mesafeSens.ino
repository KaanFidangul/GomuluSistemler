#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int mesafe;

int trig = 7;

int eco = 6;

double zaman;

double ses = 0.034;

void setup() {
  
  pinMode(trig, OUTPUT);
  pinMode(eco, INPUT);

  lcd.begin(16, 2);
  
}

void loop() {
  
  digitalWrite(trig, LOW);
  
  delayMicroseconds(2000);
  
  digitalWrite(trig, HIGH);
  
  delayMicroseconds(15);
  
  digitalWrite(trig, LOW);
  
  delayMicroseconds(10);
  
  zaman = pulseIn(eco, HIGH);
  
  mesafe = ses * zaman/2;
  
  lcd.setCursor(0,0);
  
  lcd.print("Mesafe");
  
  lcd.setCursor(0,1);
  
  lcd.print(mesafe);
  
  lcd.print(" cm");
  
  delay(500);
  
  lcd.clear();
}

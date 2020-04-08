#include <LiquidCrystal.h>

int numeroPin;

LiquidCrystal lcd(7, 8, 9, 10, 11 , 12);

/********************************************************/

void setup() {
  numeroPin=13;
  pinMode(numeroPin,OUTPUT);
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Start programme");
  delay(2000);
  lcd.clear();

  for (int compteur=1; compteur<=20; compteur ++)
    {
      lcd.setCursor(3,0);
      lcd.print(compteur);
      delay(1000);
      lcd.clear();

      for (int nombreClignote=0; nombreClignote<compteur; nombreClignote++)
      {
        digitalWrite(numeroPin,HIGH);
        delay(100);
        digitalWrite(numeroPin,LOW);
        delay(100);
      }
    }

  lcd.setCursor(6,0);
  lcd.print("Fin");
}

void loop() {
  
}

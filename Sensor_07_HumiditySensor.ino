//SK.Tanzir Mehedi Shawon
//Department of ICT
//MBSTU
//Date-18-05-2018

#include <LiquidCrystal.h>
#include <dht.h>
#define dataPin 8
LiquidCrystal lcd(1, 2, 4, 5, 6, 7);
dht DHT;
void setup() {
  lcd.begin(16,2);
}
void loop() {
  int readData = DHT.read22(dataPin);
  float t = DHT.temperature;
  float h = DHT.humidity;
  lcd.setCursor(0,0);
  lcd.print("TEMP.: ");
  lcd.print(t);
  lcd.print(" C");
  lcd.setCursor(0,1);
  lcd.print("HUMI.: ");
  lcd.print(h);
  lcd.print(" %");
  delay(1000);
}

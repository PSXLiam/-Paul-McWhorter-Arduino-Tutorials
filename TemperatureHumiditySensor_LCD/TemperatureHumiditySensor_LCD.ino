#include <LiquidCrystal.h>
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

#include <DHT.h>
#define Type DHT11
int sensePin=2;

DHT HT(sensePin,Type);
float humidity;
float tempC;
float tempF;
int setTime=500;
int dt=5000;
void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
HT.begin();
delay(setTime);
}

void loop() {
  // put your main code here, to run repeatedly:
humidity=HT.readHumidity();
tempC=HT.readTemperature();
tempF=HT.readTemperature(true);

lcd.clear();
lcd.setCursor(0,0);
lcd.print("Humidity: ");
lcd.print(humidity);
lcd.print("%");
delay(dt);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Temp C: ");
lcd.print(tempC);
lcd.print((char)223);
lcd.print("C ");
lcd.setCursor(0,1);
lcd.print("Temp F: ");
lcd.print(tempF);
lcd.print((char)223);
lcd.print("F ");
delay(dt);
}

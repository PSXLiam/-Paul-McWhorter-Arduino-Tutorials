#include <LiquidCrystal.h>
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

int trigPin = 2;
int echoPin = 3;
float pingTravelTime;
float pingTravelDistance;
float distanceToTarget;

int dt = 5000;

void setup() {
  // put your setup code here, to run once:
pinMode (trigPin, OUTPUT);
pinMode (echoPin, INPUT);
lcd.begin(16,2);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigPin, LOW);
delayMicroseconds(10);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
pingTravelTime = pulseIn(echoPin, HIGH);
delayMicroseconds(25);
pingTravelDistance = (pingTravelTime * 765. * 1609.34 * 100.)/(3600. * 1000000.);
//(pingTravelTime * speed on sound in mph * m in mile * cm in m)/(Second in Hour * mSeconds in Seconds);
distanceToTarget = pingTravelDistance / 2;

Serial.print("Distance to Target is: ");
Serial.print(distanceToTarget);
Serial.print(" Cm. ");
lcd.setCursor(0,0);
lcd.print("Target Distance");
lcd.setCursor(0,1);
lcd.print(distanceToTarget);
lcd.print(" Cm");
delay (dt);
lcd.clear();
}

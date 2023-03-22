#include <LiquidCrystal.h>
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
int buttonPin=A0;
int buttonVal;

int numMeas=50;
int j;
float avMeas;
float bucket; //

LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

int trigPin = 2;
int echoPin = 3;
float pingTravelTime;
float pingTravelDistance;
float distanceToTarget;

int dt = 5000;

void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
pinMode (trigPin, OUTPUT);
pinMode (echoPin, INPUT);
pinMode (buttonPin, INPUT);
digitalWrite(buttonPin, HIGH);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.setCursor(0,0);
lcd.print("Place the Target");
lcd.setCursor(0,1);
lcd.print("Press to Measure");
buttonVal = digitalRead(buttonPin);
while(buttonVal == 1){
  buttonVal = digitalRead(buttonPin);
}
lcd.setCursor(0,0);
lcd.clear();
lcd.print("Measuring . . .");
bucket=0;// empty the bucket for new loops
for (j=1; j<=numMeas; j++){
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
  bucket=bucket+distanceToTarget;
}
avMeas = bucket / numMeas;

Serial.print("Av. Dist to Target is: ");
Serial.print(avMeas);
Serial.print(" Cm. ");
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Target Distance");
lcd.setCursor(0,1);
lcd.print(avMeas);
lcd.print(" Cm");
delay (dt);

}

#include <LiquidCrystal.h>
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

float firstNum;
float secNum;
float answer;
String op;

void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Input");
lcd.setCursor(0,1);
lcd.print("First Number");
while (Serial.available()==0){}
firstNum = Serial.parseFloat();

lcd.clear();
lcd.setCursor(0,0);
lcd.print("Input");
lcd.setCursor(0,1);
lcd.print("Second Number");
while (Serial.available()==0){}
secNum = Serial.parseFloat();

lcd.clear();
lcd.setCursor(0,0);
lcd.print("Input Operator");
lcd.setCursor(0,1);
lcd.print("(+,-,*,/)");
while (Serial.available()==0){}
op = Serial.readString();

if (op == "+"){
  answer = firstNum + secNum;
}
if (op == "-"){
  answer = firstNum - secNum;
}
if (op == "*"){
  answer = firstNum * secNum;
}
if (op == "/"){
  answer = firstNum / secNum;
}

//print complete question
lcd.clear();
lcd.setCursor(0,0);
lcd.print(firstNum);
lcd.print(op);
lcd.print(secNum);
lcd.setCursor(0,1);
lcd.print("=");
lcd.print(answer);
delay(5000);



}

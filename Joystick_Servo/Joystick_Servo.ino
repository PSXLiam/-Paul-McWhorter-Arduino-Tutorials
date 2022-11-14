#include <Servo.h>

int Xpin = A0;
int Ypin = A1;
int Spin = 2;
int XSpin = 9;
int WVx;
int Xval;
int Yval;
int Sval;
int dt = 250;

Servo Xservo;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

Xservo.attach(XSpin);

pinMode(Xpin, INPUT);
//pinMode(Ypin, INPUT);
pinMode(Spin, INPUT);
pinMode(XSpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Xval = analogRead(Xpin);
WVx = (180./1023.)*Xval;
//Yval = analogRead(Ypin);
Sval = digitalRead(Spin);

Xservo.write(WVx);

delay(dt);
Serial.print("X Value = ");
Serial.print(Xval);
Serial.print(" Y Value = ");
Serial.print(Yval);
Serial.print(" Switch State is ");
Serial.println(Sval);

}

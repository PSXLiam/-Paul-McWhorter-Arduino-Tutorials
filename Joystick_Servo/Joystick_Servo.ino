#include <Servo.h>

int Xpin = A0;
int Spin = 2;
int XSpin = 9;
int buzzPin = 7;
int WVx;
int Xval;
int Sval;
int dt = 250;

Servo Xservo;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

Xservo.attach(XSpin);

pinMode(Xpin, INPUT);
pinMode(Spin, INPUT);
digitalWrite(Spin, HIGH);
pinMode(XSpin, OUTPUT);
pinMode(buzzPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Xval = analogRead(Xpin);
WVx = (180./1023.)*Xval;
Sval = digitalRead(Spin);

Xservo.write(WVx);

if (Sval == 0){
  digitalWrite(buzzPin, HIGH);
  }
else {
  digitalWrite(buzzPin, LOW );
  }

delay(dt);
Serial.print("X Value = ");
Serial.print(Xval);
Serial.print(" Switch State is ");
Serial.println(Sval);

}

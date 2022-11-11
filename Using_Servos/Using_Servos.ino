#include <Servo.h>

int servoPin = 9;
int servoAngle;
int lightPin = A4;
int lightVal;
int dt = 250;

Servo myServo;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myServo.attach(servoPin);
pinMode(lightPin, INPUT);
pinMode(servoPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
lightVal = analogRead(lightPin);
//Serial.println(lightVal);

servoAngle = (-18./16.)*lightVal+18.*310./16.;
//Serial.println(servoAngle);
myServo.write(servoAngle);
}

int xPin = A0;
int yPin = A1;
int sPin = 2;
int xVal;
int yVal;
int sVal;
int dt = 200;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(xPin, INPUT);
pinMode(yPin, INPUT);
pinMode(sPin, INPUT);
digitalWrite(sPin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
xVal = analogRead(xPin);
yVal = analogRead(yPin);
sVal = digitalRead(sPin);
delay(dt);

Serial.print("X Value = ");
Serial.print(xVal);
Serial.print(" Y Value = ");
Serial.print(yVal);
Serial.print(" Switch State is ");
Serial.println(sVal);
}

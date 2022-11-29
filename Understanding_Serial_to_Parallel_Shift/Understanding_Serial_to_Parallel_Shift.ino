int latchPin = 11;
int clockPin = 9;
int dataPin = 12;
int dt = 250;

byte LED1s = 0B10101010;
byte LED2s = 0B01010101;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(latchPin, OUTPUT);
pinMode(dataPin, OUTPUT);
pinMode(clockPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(latchPin,LOW);
shiftOut(dataPin, clockPin, LSBFIRST, LED1s);
digitalWrite(latchPin,HIGH);
delay(dt);
digitalWrite(latchPin,LOW);
shiftOut(dataPin, clockPin, LSBFIRST, LED2s);
digitalWrite(latchPin,HIGH);
delay(dt);
}

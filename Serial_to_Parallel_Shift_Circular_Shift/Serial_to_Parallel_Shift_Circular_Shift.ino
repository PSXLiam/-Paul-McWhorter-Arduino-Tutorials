int latchPin = 11;
int clockPin = 9;
int dataPin = 12;
int dt = 500;

byte LEDs = 0b00000101;

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
shiftOut(dataPin, clockPin, LSBFIRST, LEDs);
digitalWrite(latchPin,HIGH);
//LEDs = LEDs/128 + LEDs*2; //Circular Shift LEDs Left
LEDs = LEDs*128 + LEDs/2; //Circular Shift LEDs Right
delay(dt);

}

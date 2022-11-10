int LEDPin = 3;
int buzzPin = 2; 
int buttonPin1 = 12;
int buttonPin2 = 11;
int buttonVal1;
int buttonVal2;
int LEDBright = 0;
int LEDAdjust = 150;
int dt = 500;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LEDPin, OUTPUT);
pinMode(buzzPin, OUTPUT);
pinMode(buttonPin1, INPUT);
pinMode(buttonPin2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonVal1 = digitalRead(buttonPin1);
buttonVal2 = digitalRead(buttonPin2);

//Serial.print("Button 1 = ");
//Serial.print(buttonVal1);
//Serial.print(", ");
//Serial.print("Button 2 = ");
//Serial.println(buttonVal2);
//delay(dt);

if(buttonVal1 == 0){
  LEDBright = LEDBright+5;
  delay(LEDAdjust);
  }
if(buttonVal2 == 0){
  LEDBright = LEDBright-5;
  delay(LEDAdjust);
  }
if(LEDBright > 255){
  digitalWrite(buzzPin, HIGH);
  delay(dt);
  digitalWrite(buzzPin, LOW);
  LEDBright = 255;
  }
if(LEDBright < 0){
  digitalWrite(buzzPin, HIGH);
  delay(dt);
  digitalWrite(buzzPin, LOW);
  LEDBright = 0;
  }

//Serial.println(LEDBright); //To check the LED brightness value
analogWrite(LEDPin, LEDBright);
}

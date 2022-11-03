int potPin = A1;
int LEDPin = 6;
int potVal;
float LEDVal;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(potPin, INPUT);
pinMode(LEDPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
potVal = analogRead(potPin);
LEDVal = (255./1023.)*potVal;  // 255 is max value on LED / 1023 is max value on potentiometer
analogWrite(LEDPin, LEDVal);
Serial.println(LEDVal); // Serial monitor to check the output value of LED
}

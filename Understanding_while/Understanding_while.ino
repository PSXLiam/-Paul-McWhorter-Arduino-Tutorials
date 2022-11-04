int potPin = A0;
int LEDPin = 7;
int potVal;
int wait = 100;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(potPin, INPUT);
pinMode(LEDPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
potVal = analogRead(potPin);
Serial.println(potVal);
delay(wait);

while (potVal>1000){
  digitalWrite(LEDPin, HIGH);
  potVal = analogRead(potPin);
  Serial.println(potVal);
  delay(wait);
  }
digitalWrite(LEDPin, LOW);
}

int buttonPin = 2;
int buttonValue;
int dt = 100;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buttonPin, INPUT);
digitalWrite(buttonPin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonValue = digitalRead(buttonPin);
Serial.print("Your Button is: ");
Serial.println(buttonValue);
delay(dt);
}

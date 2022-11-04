int yellowPin = 6;
int redPin = 9;
int wait = 500;

void setup() {
  // put your setup code here, to run once:
pinMode(yellowPin, OUTPUT);
pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite (yellowPin, HIGH);
delay(wait);
digitalWrite (yellowPin, LOW);
delay(wait);
digitalWrite (yellowPin, HIGH);
delay(wait);
digitalWrite (yellowPin, LOW);
delay(wait);
digitalWrite (yellowPin, HIGH);
delay(wait);
digitalWrite (yellowPin, LOW);
delay(wait);

digitalWrite (redPin, HIGH);
delay(wait);
digitalWrite (redPin, LOW);
delay(wait);
digitalWrite (redPin, HIGH);
delay(wait);
digitalWrite (redPin, LOW);
delay(wait);
digitalWrite (redPin, HIGH);
delay(wait);
digitalWrite (redPin, LOW);
delay(wait);
digitalWrite (redPin, HIGH);
delay(wait);
digitalWrite (redPin, LOW);
delay(wait);
digitalWrite (redPin, HIGH);
delay(wait);
digitalWrite (redPin, LOW);
delay(wait);
}

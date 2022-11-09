int lightPin = A0;
int greenPin = 9;
int redPin = 10;
int lightVal;
int wait = 250;

void setup() {
  // put your setup code here, to run once:
pinMode(lightPin, INPUT);
pinMode(greenPin, OUTPUT);
pinMode(redPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
lightVal =  analogRead(lightPin);
Serial.println(lightVal);
delay(wait);

if (lightVal >= 250){
  digitalWrite(greenPin, HIGH);
  digitalWrite(redPin, LOW);
  }
else{
  digitalWrite(greenPin, LOW);
  digitalWrite(redPin, HIGH);
  }
}

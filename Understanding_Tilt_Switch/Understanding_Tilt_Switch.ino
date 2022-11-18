int tiltPin = 2;
int tiltVal;
int redPin = 7;
int greenPin = 6;
int dt = 100;

void setup() {
  // put your setup code here, to run once:
pinMode(tiltPin, INPUT);
digitalWrite(tiltPin, HIGH);
pinMode(redPin, OUTPUT);
pinMode(greenPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
tiltVal = digitalRead(tiltPin);
//Serial.println(tiltVal);
if(tiltVal == 0){
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
  delay(dt);
  }
else{
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW) ;
  delay(dt);
  }
}

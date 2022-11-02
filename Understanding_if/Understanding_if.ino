int myPin = A2;
int greenPin = 9;
int yellowPin = 10;
int redPin = 11;
int readVal;
float V2;
int wait = 250;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(myPin, INPUT);
pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
readVal = analogRead(myPin);
V2 = (5./1023.)*readVal;
Serial.print("Potentiometer Voltage is ");
Serial.println(V2);

if (V2 <= 3.0){
  digitalWrite(greenPin, HIGH);
  digitalWrite(yellowPin, LOW);
  digitalWrite(redPin, LOW);
}
if (V2 > 3.0 && V2 <= 4.0){
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, HIGH);
  digitalWrite(redPin, LOW);
}
if (V2 > 4.0){
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, LOW);
  digitalWrite(redPin, HIGH);
}

delay(wait);
}

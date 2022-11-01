int myVoltPin = A2;
int readVal;
float V2;
int wait = 250;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
readVal = analogRead(myVoltPin);
V2 = (5./1023.)*readVal; 
Serial.println(V2);
delay(wait);
}

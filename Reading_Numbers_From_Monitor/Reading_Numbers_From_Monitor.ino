int numBlinks;
int j;
int blinkTime = 500;
int redPin = 12;

String msg="How Many Blinks do you Want:"; 

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while (Serial.available()==0){} //While there is no data on the serial port

numBlinks = Serial.parseInt();
for (j=1; j<=numBlinks; j++){
  digitalWrite(redPin, HIGH);
  delay(blinkTime);
  digitalWrite(redPin, LOW);
  delay(blinkTime);
  }
}

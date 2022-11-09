int lightPin = A0;
int buzzPin = 9;
int lightVal;
int delayT;

void setup() {
  // put your setup code here, to run once:
pinMode(lightPin, INPUT);
pinMode(buzzPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
lightVal =  analogRead(lightPin);
delayT = (9./130.)*lightVal-(9.*170./130.)+1.;
if (delayT < 0){
  delayT =0;
  }
Serial.println(delayT);

digitalWrite(buzzPin, HIGH);
delay(delayT);
digitalWrite(buzzPin, LOW);
delay(delayT);
}

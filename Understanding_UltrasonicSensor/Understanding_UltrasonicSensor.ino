int trigPin = 12;
int echoPin = 11;
int pingTravelTime;

void setup() {
  // put your setup code here, to run once:
pinMode (trigPin, OUTPUT);
pinMode (echoPin, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigPin, LOW);
delayMicroseconds(10);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
pingTravelTime = pulseIn(echoPin, HIGH);
delayMicroseconds(25);
Serial.println(pingTravelTime);
}

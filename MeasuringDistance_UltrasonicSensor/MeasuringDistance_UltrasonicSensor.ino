int trigPin = 12;
int echoPin = 11;
float pingTravelTime;
float pingTravelDistance;
float distanceToTarget;

int dt = 500;

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
pingTravelDistance = (pingTravelTime * 765. * 1609.34 * 100.)/(3600. * 1000000.);
//(pingTravelTime * speed on sound in mph * m in mile * cm in m)/(Second in Hour * mSeconds in Seconds);
distanceToTarget = pingTravelDistance / 2;
Serial.print("Distance to Target is: ");
Serial.print(distanceToTarget);
Serial.println(" cm.");
delay (dt);
}

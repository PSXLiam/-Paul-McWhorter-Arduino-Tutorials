int redLED = 9;
int bright = 100;
int dim = 5;
int waitTime = 750;

void setup() {
  // put your setup code here, to run once:
pinMode(redLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(redLED, bright);
delay(waitTime);
analogWrite(redLED, dim);
delay(waitTime);
}

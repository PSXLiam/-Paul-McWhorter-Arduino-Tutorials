int redLED = 8;
int Ldot = 50;
int Ldash  = 150;
int space = 200;

void setup() {
  // put your setup code here, to run once:
pinMode(redLED,OUTPUT);
}

void dot() {
  digitalWrite(redLED,HIGH);
  delay(Ldot);
  digitalWrite(redLED,LOW);
  delay(Ldot);
}
void dash() {
  digitalWrite(redLED,HIGH);
  delay(Ldash);
  digitalWrite(redLED,LOW);
  delay(Ldash);
}

void loop() {
  // put your main code here, to run repeatedly:
dot();
dot();
dot();

delay(space);

dash();
dash();
dash();

delay(space);

dot();
dot();
dot();

delay(1000);
}

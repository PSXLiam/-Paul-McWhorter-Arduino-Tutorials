int yellowPin = 6;
int redPin = 9;
int wait = 500;
int yellowBlink = 3;
int redBlink = 5;
int j; //counter

void setup() {
  // put your setup code here, to run once:
pinMode(yellowPin, OUTPUT);
pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(j=1; j<=yellowBlink; j++){
  digitalWrite (yellowPin, HIGH);
  delay(wait);
  digitalWrite (yellowPin, LOW);
  delay(wait);
  }

for(j=1; j<=redBlink; j++){
  digitalWrite (redPin, HIGH);
  delay(wait);
  digitalWrite (redPin, LOW);
  delay(wait);
  }
}

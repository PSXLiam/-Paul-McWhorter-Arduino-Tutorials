int LEDPin = 8;
int buttonPin = 12;
int buttonRead;
int dt = 100;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LEDPin, OUTPUT);
pinMode(buttonPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonRead = digitalRead(buttonPin);
Serial.println(buttonRead);
delay(dt);

if(buttonRead == 0){
  digitalWrite(LEDPin, HIGH);
  }
else{
  digitalWrite(LEDPin, LOW);
  }
}

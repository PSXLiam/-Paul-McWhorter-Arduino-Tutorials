int LEDPin = 8;
int buttonPin = 12;
int LEDState = 0;
int buttonOld = 1;
int buttonNew;
int dt = 100;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LEDPin, OUTPUT);
pinMode(buttonPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonNew = digitalRead(buttonPin);
Serial.println(buttonNew);
delay(dt);

if(buttonOld == 0 && buttonNew == 1){
  if (LEDState == 0){
    digitalWrite(LEDPin, HIGH);
    LEDState = 1;
    }
   else{
    digitalWrite(LEDPin, LOW);
    LEDState = 0;
    }
  }
buttonOld = buttonNew;
}

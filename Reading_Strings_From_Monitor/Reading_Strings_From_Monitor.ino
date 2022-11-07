int redPin = 12;
int greenPin = 11;
int bluePin = 10;

String myColor;
String msg = "What Color LED? ";

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode (redPin, OUTPUT);
pinMode (greenPin, OUTPUT);
pinMode (bluePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while (Serial.available()==0){} //While there is no data on the serial port
myColor = Serial.readString();

if (myColor.equalsIgnoreCase("red")){
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);
  }

if (myColor.equalsIgnoreCase("green")){
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, LOW);
  }

if (myColor.equalsIgnoreCase("blue")){
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, HIGH);
  }
if (myColor.equalsIgnoreCase("off")){
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);
  }
}

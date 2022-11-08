int redPin = 8;
int greenPin = 9;
int bluePin = 10;

String myColor;
String msg = "What Colour Do You Want?";

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redPin, OUTPUT);
pinMode(greenPin, OUTPUT);
pinMode(bluePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while (Serial.available()==0){} //While there is no data on the serial port
myColor = Serial.readString();

if (myColor.equalsIgnoreCase("red")){
  analogWrite(redPin, 255);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 0);
  }

if (myColor.equalsIgnoreCase("green")){
  analogWrite(redPin, 0);
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 0);
  }

if (myColor.equalsIgnoreCase("blue")){
  analogWrite(redPin, 0);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 255);
  }
if (myColor.equalsIgnoreCase("yellow")){
  analogWrite(redPin, 255);
  analogWrite(greenPin, 100);
  analogWrite(bluePin, 0);
  }
if (myColor.equalsIgnoreCase("cyan")){
  analogWrite(redPin, 0);
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 255);
  }
if (myColor.equalsIgnoreCase("magenta")){
  analogWrite(redPin, 255);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 100);
  }
if (myColor.equalsIgnoreCase("off")){
  analogWrite(redPin, 0);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 0);
  }
}

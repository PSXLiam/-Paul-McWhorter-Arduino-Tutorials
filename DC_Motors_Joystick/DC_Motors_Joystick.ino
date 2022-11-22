int speedPin = 5;
int dir1 = 4; //HIGH
int dir2 = 3; //LOW
int mSpeed;
int jPin = A1;
int jVal;

void setup() {
  // put your setup code here, to run once:
pinMode(speedPin, OUTPUT);
pinMode(dir1, OUTPUT);
pinMode(dir2, OUTPUT);
pinMode(jPin, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
jVal = analogRead(jPin);
//Serial.println(jVal);
if(jVal < 508){
  digitalWrite(dir1, LOW);//clockwise
  digitalWrite(dir2, HIGH);
  mSpeed = (-255./508.)*jVal+255.;
  if(mSpeed > 255){mSpeed = 255.;} //make sure value does not go over 255
  analogWrite(speedPin, mSpeed);
  }
if(jVal >= 508){
  digitalWrite(dir1, HIGH);//anticlockwise
  digitalWrite(dir2, LOW);
  mSpeed = (255./508.)*jVal-255.;
  if(mSpeed > 255){mSpeed = 255.;} //make sure value does not go over 255
  analogWrite(speedPin, mSpeed);
  }
//Serial.println(mSpeed);
}

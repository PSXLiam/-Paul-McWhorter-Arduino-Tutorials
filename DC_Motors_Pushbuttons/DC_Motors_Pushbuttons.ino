int speedPin = 5;
int dir1 = 4; //HIGH
int dir2 = 3; //LOW
int BP1 = 8;
int BP2 = 9;
int B1Val;
int B2Val;
int mSpeed = 0;
int dt = 500;

void setup() {
  // put your setup code here, to run once:
pinMode(speedPin, OUTPUT);
pinMode(dir1, OUTPUT);
pinMode(dir2, OUTPUT);
pinMode(BP1, INPUT);
digitalWrite(BP1, HIGH);
pinMode(BP2, INPUT);
digitalWrite(BP2, HIGH);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
B1Val = digitalRead(BP1);
B2Val = digitalRead(BP2);
Serial.print("Motor Speed ");
Serial.println(mSpeed);

//Button if statements
if(B1Val==0){
  mSpeed=mSpeed-10;
  delay(dt);
  }
if(B2Val==0){
  mSpeed=mSpeed+10;
  delay(dt);
  }

//Value Cap
if (mSpeed > 250){
  mSpeed = 250;
  }
if (mSpeed < -250){
  mSpeed = -250;
  }

//Jump from 0 to 150  
if (mSpeed == 10){
  mSpeed = 150;
  }
if (mSpeed == -10){
  mSpeed = -150;
  }

//Jump from 140 to 0
if (mSpeed == 140 ||  mSpeed == -140){
  mSpeed = 0;
  }

//Move motor
if (mSpeed == 0){
  analogWrite(speedPin, 0);
  }
if(mSpeed > 0){
  digitalWrite(dir1, LOW);
  digitalWrite(dir2, HIGH);
  analogWrite(speedPin, abs(mSpeed));
  }
if(mSpeed < 0){
  digitalWrite(dir1, HIGH);
  digitalWrite(dir2, LOW);
  analogWrite(speedPin, abs(mSpeed));
  }
}

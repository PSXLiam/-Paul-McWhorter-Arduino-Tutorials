int j=1;
int waitT=750;
int x=12;
int y=11;
int z;
String myString=" + ";
float pi=3.14;
float r=2;
float area;
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly: 
  //z=x+y;
  //Serial.print("x");
  //Serial.print(myString);
  //Serial.print(y);
  //Serial.print(" = ");
  //Serial.println(z);

  area=pi*r*r;
  Serial.print("A Circle With Raduis ");
  Serial.print(r);
  Serial.print(" Has an Area of ");
  Serial.print(area);
  Serial.println(".");
  delay(waitT);
  r=r+.5;
}

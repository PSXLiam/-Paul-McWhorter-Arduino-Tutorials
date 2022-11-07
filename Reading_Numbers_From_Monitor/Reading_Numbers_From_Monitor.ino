float radius;
float area;
float pi = 3.14;

String msg1 = "What is the radius of your circle:"; 
String msg2 = "Your Circle Has Area of ";
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg1);
while (Serial.available()==0){} //While there is no data on the serial port

radius = Serial.parseFloat();
area=pi*radius*radius;
Serial.print(msg2);
Serial.println(area);
}

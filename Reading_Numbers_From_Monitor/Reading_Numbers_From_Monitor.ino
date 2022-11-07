int myNumber;
int wait;
String msg1="Please Enter Your Number:"; 
String msg2="Your Number is: "; 

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg1);
while (Serial.available()==0){} //While there is no data on the serial port

myNumber = Serial.parseInt();
Serial.print(msg2);
Serial.println(myNumber);
}

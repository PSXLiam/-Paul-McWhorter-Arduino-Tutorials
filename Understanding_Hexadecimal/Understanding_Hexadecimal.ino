byte myByte = 0x0; //0x0 for HEX, B0 for BIN
int dt = 1500;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print(myByte, DEC); //print Deciaml
Serial.print("    "); 
Serial.print(myByte, BIN); //print Binary
Serial.print("    "); 
Serial.println(myByte, HEX); //print Hexadecimal
myByte = myByte+1;
delay(dt);
}

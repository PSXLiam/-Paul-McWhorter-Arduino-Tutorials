#include <IRremote.h>
int IRpin = 9;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
IrReceiver.begin(IRpin,ENABLE_LED_FEEDBACK);
}

void loop() {
  // put your main code here, to run repeatedly:
while (IrReceiver.decode()==0){} //wait for button press
IrReceiver.resume();
Serial.print(IrReceiver.decodedIRData.decodedRawData, HEX);
delay(1500);
}

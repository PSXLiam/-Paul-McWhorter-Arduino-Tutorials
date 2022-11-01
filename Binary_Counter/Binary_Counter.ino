int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int i = 0;
int waitTime = 750;

void setup() {
  // put your setup code here, to run once:
pinMode (led1, OUTPUT);
pinMode (led2, OUTPUT);
pinMode (led3, OUTPUT);
pinMode (led4, OUTPUT);
pinMode (led5, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led1, LOW);digitalWrite(led2, LOW);digitalWrite(led3, LOW);digitalWrite(led4, LOW);digitalWrite(led5, LOW);
delay(waitTime);
i++;
if((i %2) > 0) { digitalWrite(led1, HIGH);} else {digitalWrite(led1, LOW);}
if((i %4) > 1) { digitalWrite(led2, HIGH);} else {digitalWrite(led2, LOW);}
if((i %8) > 3) { digitalWrite(led3, HIGH);} else {digitalWrite(led3, LOW);}
if((i %16) > 7) { digitalWrite(led4, HIGH);} else {digitalWrite(led4, LOW);}
if((i %32) > 15) { digitalWrite(led5, HIGH);} else {digitalWrite(led5, LOW);}
delay(waitTime);
}

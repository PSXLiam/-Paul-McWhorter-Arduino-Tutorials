int j;
int wait = 500;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
for (j=10; j>=0; j-=2){ //j+=n is equivelent to j = j+n
  Serial.println(j);
  delay(wait);
  }
Serial.println(); //add a blank line for spacing
}

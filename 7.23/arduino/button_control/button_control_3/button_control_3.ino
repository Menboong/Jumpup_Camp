int Led = 13; // define LED Interface
int buttonpin = 3; // define the key switch sensor interface
int val; // define numeric variables val
int flag=0;
void setup() {
pinMode(Led, OUTPUT); // define LED as output interface
pinMode(buttonpin, INPUT); // define the key switch sensor output interface
}

void loop() {
// When the key switch when the sensor detects a signal, LED flashes
if (digitalRead(buttonpin) == LOW)
{
  delay(30);
  if(flag == 0)
  {
    digitalWrite(Led,HIGH);
    flag = 1;
  }
  else
  {
    digitalWrite(Led,LOW);
    flag = 0;
  }
  while(digitalRead(buttonpin)==LOW);
  delay(30);
}
}

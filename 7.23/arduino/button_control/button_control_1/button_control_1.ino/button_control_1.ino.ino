int Led = 13; // define LED Interface
int buttonpin = 3; // define the key switch sensor interface
int val; // define numeric variables val
void setup() {
pinMode(Led, OUTPUT); // define LED as output interface
pinMode(buttonpin, INPUT); // define the key switch sensor output interface
}

void loop() {
delay(150);
val = digitalRead(buttonpin); // digital interface will be assigned a value of 3 to read val

// When the key switch when the sensor detects a signal, LED flashes
if (val == LOW) 
{
  digitalWrite(Led,HIGH);
}
else
{
  digitalWrite(Led,LOW);
}
}

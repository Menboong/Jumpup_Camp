void setup() {
pinMode(5,OUTPUT);

}

void loop() {
digitalWrite(5,1);
delayMicroseconds(1000);
digitalWrite(5,0);
delayMicroseconds(1000);
}

void setup() {
  pinMode(13,OUTPUT);
}

void loop() {
  digitalWrite(13,1); //digitalWrite(pin_number that you want, LOW = 0 HIGH=1)
  delay(10); //delay(time(ms) that you want)
  digitalWrite(13,0);
  delay(10);
}

int val;
void setup() {
  Serial.begin(9600);
}

void loop() {
  val = analogRead(A1);
  Serial.println(val);
  delay(300);
}

int val;
void setup() {
  pinMode(3, INPUT);
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(3)==LOW)
  {
    val++;
  }
  Serial.println(val);
}

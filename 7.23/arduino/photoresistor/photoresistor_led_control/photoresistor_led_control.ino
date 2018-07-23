int val;
void setup() {
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val = analogRead(A0);
  Serial.println(val);
  delay(300);

  if(val >= 300)
  {
    digitalWrite(13,1);
  }
  else
  {
    digitalWrite(13,0);
  }
}

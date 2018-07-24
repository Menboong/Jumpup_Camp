void setup() {
  Serial.begin(9600);
  pinMode(3,INPUT);
  pinMode(9,OUTPUT);
}

void loop() {
  digitalWrite(9,1);
  Serial.println(analogRead(A0));
  delay(2000);
  //digitalWrite(9,0);
  //Serial.println(analogRead(A0));
  //delay(2000);
  
  
}

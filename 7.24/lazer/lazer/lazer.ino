void setup() {
  Serial.begin(9600);
  pinMode(3,INPUT);//BUTTON
  pinMode(4,OUTPUT);//BUZZER
  pinMode(9,OUTPUT);//LAZER
}

void loop() {
  digitalWrite(9,1);
  if(analogRead(A0)>=100)
  {
    digitalWrite(4,1);
    delay(50);
    digitalWrite(4,0);
    delay(50);
  }
  else
  {
    digitalWrite(4,0);
  }
}

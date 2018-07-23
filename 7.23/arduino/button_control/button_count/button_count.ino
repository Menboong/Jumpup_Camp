int flag = 0;
int cnt = 0;
void setup() {
  pinMode(13, OUTPUT);
  pinMode(3, INPUT);
  Serial.begin(9600);
}

void loop() {
if(digitalRead(3) == LOW)
{
  delay(30);
  if(flag == 0)
  {
    digitalWrite(13,1);
    flag = 1;
    cnt++;
  }
  else
  {
    digitalWrite(13,0);
    flag = 0;
    cnt++;
  }
  delay(30);
  while(digitalRead(3)==LOW);
  Serial.println(cnt);
}

  
}

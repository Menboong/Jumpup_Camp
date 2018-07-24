int flag = 0;
int ck = 0;

void setup() {
  Serial.begin(9600);
  pinMode(3,INPUT);//BUTTON
  pinMode(4,OUTPUT);//BUZZER
  pinMode(9,OUTPUT);//LAZER
}

void loop() {
  if(digitalRead(3) == 0)
  {
    delay(30);
    if(flag == 0)
    {
      digitalWrite(9,1);
      flag = 1;
      ck = 1;
    }
    else
    {
     digitalWrite(9,0);
     flag = 0;
     ck = 0;
    }
   while(digitalRead(3)==0);
   delay(30);
  }
while(ck == 1)
{
  if(analogRead(A0)>=100)
  {
    Serial.println(analogRead(A0));
    digitalWrite(4,1);
    delay(50);
    digitalWrite(4,0);
    delay(50);
   }
   else
   {
    digitalWrite(4,0);
   }
   if(digitalRead(3)==0) break;
}
}

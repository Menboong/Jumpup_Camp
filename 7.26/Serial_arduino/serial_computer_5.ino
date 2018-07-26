int TX=0;
int RX[2] = {0,0};
int i;
int sum;
int light;

void setup() {
Serial.begin(9600);
pinMode(13,OUTPUT);
pinMode(4,OUTPUT);
}

void loop() {
serialEvent();

//Serial.print("0,");

light=analogRead(A0);
if(light <10)
{
  Serial.print("000");
  Serial.print(light);
  Serial.print(",");
}
else if(light <100)
{
  Serial.print("000");
  Serial.print(light);
  Serial.print(",");
}
else if(light <100)
{
  Serial.print("000");
  Serial.print(light);
  Serial.print(",");
}
else 
{
  Serial.print(light);
  Serial.print(",");
}
delay(700);
if(i==2)
{
  sum = RX[0] + RX[1];
  i=0;
  Serial.print(RX[0]);
  Serial.print(RX[1]);
  Serial.print(",");
  if(sum == 100) digitalWrite(13,1);
  else if(sum == 98) digitalWrite(13,0);
  else if(sum == 108) digitalWrite(4,1);
  else if(sum == 101) digitalWrite(4,0);
}
}

void serialEvent(){
  if(Serial.available()>0)
  {
    RX[i] = Serial.read();
    i++;
  }
}


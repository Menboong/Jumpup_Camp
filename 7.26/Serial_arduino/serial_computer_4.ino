int TX=0;
int RX[2] = {0,0};
int i;
int sum;

void setup() {
Serial.begin(9600);
pinMode(13,OUTPUT);
pinMode(4,OUTPUT);
}

void loop() {
serialEvent();
/*if(RX == 5149)digitalWrite(13,1);
else if(RX == 5048) digitalWrite(13,0);
else if(RX == "23") digitalWrite(4,1);
else if(RX == "39") digitalWrite(4,0);*/
if(i==2)
{
  sum = RX[0] + RX[1];
  i=0;
  Serial.print(RX[0]);
  Serial.println(RX[1]);
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


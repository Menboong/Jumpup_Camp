int RX;

void setup() {
Serial.begin(9600);
pinMode(13,OUTPUT);
pinMode(4,OUTPUT);
}

void loop() {
serialEvent();
if(RX == 49)digitalWrite(13,1);
else if(RX == 48) digitalWrite(13,0);
else if(RX == 51) digitalWrite(4,1);
else if(RX == 50) digitalWrite(4,0);
}

void serialEvent(){
  if(Serial.available()>0)
  {
    RX = Serial.read();
  }
}


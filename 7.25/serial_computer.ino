int RX;

void setup() {
Serial.begin(9600);
pinMode(13,OUTPUT);
}

void loop() {
serialEvent();
if(RX == 49)digitalWrite(13,1);
else if(RX == 48) digitalWrite(13,0);
}

void serialEvent(){
  if(Serial.available()>0)
  {
    RX = Serial.read();
  }
}


#include<OneWire.h>

int DS18S20 = 2;
OneWire ds(DS18S20);

int TX=0;
int RX[2] = {0,0};
int i;
int sum;
int light;
int tmp;

void setup() {
Serial.begin(9600);
pinMode(13,OUTPUT);
pinMode(4,OUTPUT);
pinMode(2,INPUT);
}

void loop() {
serialEvent();
light=analogRead(A0);
if(light <10) Serial.print("000");
else if(light <100) Serial.print("00");
else if(light <1000) Serial.print("0");
Serial.print(light);

Serial.print(getTemp(),1);
delay(700);

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

void serialEvent()
{
  if(Serial.available()>0)
  {
    RX[i] = Serial.read();
    i++;
  }
}

float getTemp() {
  byte data[12];
  byte addr[8];
  if ( !ds.search(addr)) {
    ds.reset_search();
    return -1000;
  }
  if ( OneWire::crc8( addr, 7) != addr[7]) {
    Serial.println("CRC is not valid!");
    return -1000;
  }

  if ( addr[0] != 0x10 && addr[0] != 0x28) {
    Serial.print("Device is not recognized");
    return -1000;
  }
  ds.reset();
  ds.select(addr);
  ds.write(0x44, 1);
  byte present = ds.reset();
  ds.select(addr);
  ds.write(0xBE);
  for (int i = 0; i < 9; i++)  {
    data[i] = ds.read();
  }
  ds.reset_search();
  byte MSB = data[1];
  byte LSB = data[0];
  float tempRead = ((MSB << 8) | LSB);
  float TemperatureSum = tempRead / 16;
  return TemperatureSum;
}

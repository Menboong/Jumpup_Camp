#include "DHT.h"
#include<OneWire.h>
       
#define DHTPIN 7      
#define DHTTYPE DHT11  
DHT dht(DHTPIN, DHTTYPE);  

int DS18S20 = 2;
OneWire ds(DS18S20);

void setup() {
  Serial.begin(9600);
}

void loop() {
  delay(2000); 
  float t = dht.readTemperature();  // 변수 t에 온도 값을 저장
  float temp = getTemp();
  Serial.print("DHT11_Temperature: ");  // 이하생략
  Serial.print(t);
  Serial.print(" C");
  Serial.print("  18b20_Temperature: ");  // 이하생략
  Serial.print(temp);
  Serial.println(" C");
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


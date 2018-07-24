#include "DHT.h"       
#define DHTPIN 7      
#define DHTTYPE DHT11  
DHT dht(DHTPIN, DHTTYPE);  
void setup() {
  Serial.begin(9600);
}

void loop() {
  delay(2000);
  int h = dht.readHumidity();  // 변수 h에 습도 값을 저장 
  int t = dht.readTemperature();  // 변수 t에 온도 값을 저장
  Serial.print("Humidity: ");  // 문자열 Humidity: 를 출력한다.
  Serial.print(h);  // 변수 h(습도)를 출력한다.
  Serial.print("%\t");  // %를 출력한다
  Serial.print("Temperature: ");  // 이하생략
  Serial.print(t);
  Serial.println(" C");
}

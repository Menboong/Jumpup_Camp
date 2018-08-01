#include<Servo.h>
Servo servo;

#include <DHT.h>
#define DHTPIN 4
#define DHTTYPE DHT11
DHT dht(DHTPIN,DHTTYPE);

int ServoPin = 3;

int inByte=0;

int flag = 0;

void setup() {
  servo.attach(3);
  pinMode(2,INPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);

}

void loop() {
  
  delay(500);
  int h = dht.readHumidity();
  int t = dht.readTemperature();
  if(h<10) Serial.print("00");
  else if(h<100) Serial.print("0");
  Serial.print(h);
  if(t<10) Serial.print("00");
  else if(t<100) Serial.print("0");
  Serial.print(t);

  int l = map(analogRead(A0),0,1023,0,100);
  if(l<10) Serial.print("00");
  else if(l<100)Serial.print("0");
  Serial.print(l);

  int w = map(analogRead(A1),0,1023,0,100);
  if(w<10) Serial.print("00");
  else if(w<100) Serial.print("0");
  Serial.println(w);
  
  int i;
  if(Serial.available())
  {
    inByte = Serial.read();
    Serial.write("Received data\n");
    inByte -= 0x30;
    if(inByte == 1) digitalWrite(9,1);
    else if(inByte == 2) digitalWrite(9,0);
    else if(inByte == 3) digitalWrite(10,1);
    else if(inByte == 4) digitalWrite(10,0);
    else if(inByte == 5) digitalWrite(11,1);
    else if(inByte == 6) digitalWrite(11,0);
    else if(inByte == 7) servo.write(110);
    else if(inByte == 8) servo.write(0);
  }
}



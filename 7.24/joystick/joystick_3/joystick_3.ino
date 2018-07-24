int X = A4; // x
int Y = A3; // y 
int S = 5;

int x, y, s,px,py; 
// 프로그램 시작 - 초기화 작업
void setup()
{
 Serial.begin(115200); // 시리얼 통신 초기화
 pinMode(X, INPUT);
 pinMode(Y, INPUT);
 pinMode(S, INPUT);
 digitalWrite(S, HIGH); 
}
void loop()
{
 x = analogRead(X);
 y = analogRead(Y);
 s = digitalRead(S);
 if((px<x+2)&&(px>x-2))
 {}
 else
 {
  Serial.print("X="); 
  Serial.print(x, DEC);
  Serial.print("  ,Y=");
  Serial.print(y, DEC);
  Serial.print("  ,S=");
  Serial.println(s, DEC);
 }
 if((py<y+2)&&(py>y-2))
 {}
 else
 {
  Serial.print("X="); 
  Serial.print(x, DEC);
  Serial.print("  ,Y=");
  Serial.print(y, DEC);
  Serial.print("  ,S=");
  Serial.println(s, DEC); 
 }
 if(s != 1)
 {
  Serial.print("X="); 
  Serial.print(x, DEC);
  Serial.print("  ,Y=");
  Serial.print(y, DEC);
  Serial.print("  ,S=");
  Serial.println(s, DEC); 
 }
 py = y;
 px = x;
 delay(100);
}

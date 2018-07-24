int X = A4; // x
int Y = A3; // y
 
int S = 5;
 
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
 int x, y, s;
 x = analogRead(X);
 y = analogRead(Y);
 s = digitalRead(S);
 if(x!=499&&x!=498)
 {
  Serial.print("X="); 
  Serial.println(x, DEC);
 }
 if(y!=514&&y!=515)
 {
 Serial.print("Y=");
 Serial.println(y, DEC); 
 }
 if(s != 1)
 {
 Serial.print("S=");
 Serial.println(s, DEC); 
 }
 delay(100);
}

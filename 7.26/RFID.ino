#include <SPI.h>
#include <MFRC522.h>

#define RST_PIN   9                            // reset핀은 9번으로 설정
#define SS_PIN    10                           // SS핀은 10번으로 설정
                                               // SS핀은 데이터를 주고받는 역할의 핀( SS = Slave Selector )

MFRC522 mfrc(SS_PIN, RST_PIN);                 // MFR522를 이용하기 위해 mfrc객체를 생성해 줍니다.
int rfid[4];

void setup(){
  Serial.begin(9600);                         // 시리얼 통신, 속도는 9600
  SPI.begin();                                // SPI 초기화
                                              // (SPI : 하나의 마스터와 다수의 SLAVE(종속적인 역활)간의 통신 방식)
  mfrc.PCD_Init();                               
}

void loop(){
  if ( !mfrc.PICC_IsNewCardPresent() || !mfrc.PICC_ReadCardSerial() ) {   
                                               // 태그 접촉이 되지 않았을때 또는 ID가 읽혀지지 않았을때
    delay(500);                                // 0.5초 딜레이 
    return;                                    // return
  } 
    
  //Serial.print("Card UID:");                  // 태그의 ID출력
  
  for (byte i = 0; i < 4; i++) {               // 태그의 ID출력하는 반복문.태그의 ID사이즈(4)까지
    rfid[i] = mfrc.uid.uidByte[i];        // mfrc.uid.uidByte[0] ~ mfrc.uid.uidByte[3]까지 출력 
    Serial.println(rfid[i]);  
}

if(rfid[0] == 122 && rfid[1] == 34 && rfid[2] == 97 && rfid[3] == 163)
{
  Serial.println("1");
}
else if(rfid[0] == 195 && rfid[1] == 157 && rfid[2] == 94 && rfid[3] == 36)
{
  Serial.println("2"); 
}
}

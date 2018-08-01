
String inputString = "";         // a String to hold incoming data
boolean stringComplete = false;  // whether the string is complete

int inByte=0;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);

}

void loop() {
  int i;
  if(Serial.available())
  {
    inByte = Serial.read();
    Serial.write("Received data\n");

    inByte -= 0x30;

    for(i=0; i<inByte; i++)
    {
      digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(500);                       // wait for a second
      digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
      delay(500); 
    }    
  }
}



#include <SoftwareSerial.h>
SoftwareSerial TWE(5, 6); // RX, TX
#define LED 13
#define SSR 2
#define PIN 3
String msg_state = "";
String msg_r     = "";
String msg_g     = "";
String msg_b     = "";

void setup() {
  TWE.begin(38400);
  Serial.begin(38400);
  pinMode(LED, OUTPUT);
  pinMode(SSR, OUTPUT);
}
 
void loop() {
  byte recv [60] = {};
  byte count     = 0;  
  //receive data
  while (TWE.available())
  {
    recv [count] = TWE.read();
    count++;
  }
  //serial_communication
  if (count > 0)
  {
    String msg = "";
    for (byte i = 0 ; i < count ; i++) {
      msg = msg + (char)recv[i];
      Serial.write((char)recv[i]);
    }
    
    msg_state = msg.substring(5,7);
    msg_r     = msg.substring(7,9);    
    msg_g     = msg.substring(9,11);
    msg_b     = msg.substring(11,13);
    
    int str_length = msg.length();
    
    // send serial data
    Serial.print(hexStrToInt(msg_state));
    Serial.print('\t');
    Serial.print(hexStrToInt(msg_r));
    Serial.print('\t');
    Serial.print(hexStrToInt(msg_g));
    Serial.print('\t');
    Serial.println(hexStrToInt(msg_b));
  }
  
  //judgement
  if (hexStrToInt(msg_state) == 1) {
    digitalWrite(SSR, HIGH);
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(SSR, LOW);
    digitalWrite(LED, LOW);
  }
  
}

int hexStrToInt(String _str){
  int result = (int)strtol(_str.c_str(), NULL, 16);
  return result;
}


#include <SoftwareSerial.h>
int ledPin1 = 13;
char order[100];
bool led_state = 0;

SoftwareSerial BTSerial(2,3);   //bluetooth module Tx:Digital 2 Rx:Digital 3

void setup() {
  pinMode(13, OUTPUT);
  digitalWrite(13,LOW);
  
  Serial.begin(9600);
  BTSerial.begin(9600);
  //Serial.write("ATcommand");  //ATcommand Start
}

void loop() {

  
  if (BTSerial.available())
{
  Serial.write(BTSerial.read());
  if(BTSerial.read() == 'l')
  {
    if(led_state == 0)
    {
      digitalWrite(13,HIGH);
      led_state = 1;
    }
    else
    {
      digitalWrite(13,LOW);
      led_state = 0;
    }
    
 
  }
}
  if (Serial.available())
{
  BTSerial.write(Serial.read());   
}



}

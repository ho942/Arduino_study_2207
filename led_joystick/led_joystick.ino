int JoyStick_X = 1;
int JoyStick_Y = 2;
int red = 2;
int blue = 3;
int green = 4;




void setup() {
  // put your setup code here, to run once:

pinMode(JoyStick_X, INPUT);
pinMode(JoyStick_Y, INPUT);
pinMode(red, OUTPUT);
pinMode(blue, OUTPUT);
pinMode(green, OUTPUT);
Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
int x = analogRead(JoyStick_X);
int y = analogRead(JoyStick_Y);
if (x>1000 && y>1000 ){
  digitalWrite(red,HIGH);
  digitalWrite(blue,LOW);
  digitalWrite(green,LOW);
}
else if (x>1000 && y<100){
  digitalWrite(red,LOW);
  digitalWrite(blue,HIGH);
  digitalWrite(green,LOW);
}
else if (x<100 && y>1000){
  digitalWrite(red,LOW);
  digitalWrite(blue,LOW);
  digitalWrite(green,HIGH);
  
}
else {
  digitalWrite(red,LOW);
  digitalWrite(blue,LOW);
  digitalWrite(green,LOW);  
  
}
Serial.print(x,DEC);
Serial.print(", ");
Serial.println(y,DEC);



}

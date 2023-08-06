int red = 2;
int blue = 3;
int green = 4;

void setup() {
  // put your setup code here, to run once:

pinMode(red, OUTPUT);
pinMode(blue, OUTPUT);
pinMode(green, OUTPUT);
digitalWrite(red,LOW);
digitalWrite(blue,LOW);
digitalWrite(green,LOW);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
char input;
if(Serial.available()){
//Serial.println("r, g ,b"); //어떻게 선택지 먼저 나오게 하지.
  input = Serial.read();

  if (input == 'r'){
    digitalWrite(red, HIGH);
    Serial.println("RED ON");
    delay(3000);
    digitalWrite(red, LOW);
    Serial.println("RED OFF");
  }
  if (input == 'g'){
    digitalWrite(green, HIGH);
    Serial.println("GREEN ON");
    delay(3000);
    digitalWrite(green, LOW);
    Serial.println("GREEN OFF");
  }
  if (input == 'b'){
    digitalWrite(blue, HIGH);
    Serial.println("BLUE ON");
    delay(3000);
    digitalWrite(blue, LOW);
    Serial.println("BLUE OFF");
  }
}
delay(10);
}

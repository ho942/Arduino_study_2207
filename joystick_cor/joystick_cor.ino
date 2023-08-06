const int buttonPin2 = 2;
const int buttonPin3 = 3;
const int buttonPin4 = 4;
const int buttonPin5 = 5;



void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

pinMode(buttonPin2, INPUT_PULLUP);
pinMode(buttonPin3, INPUT_PULLUP);
pinMode(buttonPin4, INPUT_PULLUP);
pinMode(buttonPin5, INPUT_PULLUP);






}

void loop() {
  // put your main code here, to run repeatedly:

int X = analogRead(0); // 0 523 1023 왼 오 
int Y = analogRead(1); // 1023 509 0 위 아래

int buttonValue2 = digitalRead(2); // A
int buttonValue3 = digitalRead(3); // B
int buttonValue4 = digitalRead(4); // C
int buttonValue5 = digitalRead(5); // D
// 기본은 High로 되어 있고, 눌리면 low가 됨.

Serial.print("joy stick   ");
Serial.print("X");
Serial.print(":");
Serial.print(X);
Serial.print("  ");
Serial.print("Y");
Serial.print(":");
Serial.println(Y);

if (buttonValue2 == LOW) {

  Serial.print("joy stick   ");
Serial.print("X");
Serial.print(":");
Serial.print(X);
Serial.print("  ");
Serial.print("Y");
Serial.print(":");
Serial.print(Y);
Serial.print("    \"");
Serial.println("A: Yes   B: No  C: No  D : No");

}

if (buttonValue3 == LOW) {

  Serial.print("joy stick   ");
Serial.print("X");
Serial.print(":");
Serial.print(X);
Serial.print("  ");
Serial.print("Y");
Serial.print(":");
Serial.print(Y);
Serial.print("    \"");
Serial.println("A: No   B: Yes  C: No  D : No");

}
if (buttonValue4 == LOW) {

  Serial.print("joy stick   ");
Serial.print("X");
Serial.print(":");
Serial.print(X);
Serial.print("  ");
Serial.print("Y");
Serial.print(":");
Serial.print(Y);
Serial.print("    \"");
Serial.println("A: No   B: No  C: Yes  D : No");

}

if (buttonValue5 == LOW) {

  Serial.print("joy stick   ");
Serial.print("X");
Serial.print(":");
Serial.print(X);
Serial.print("  ");
Serial.print("Y");
Serial.print(":");
Serial.print(Y);
Serial.print("    \"");
Serial.println("A: No   B: No  C: No  D : Yes");

}

delay(500);

}

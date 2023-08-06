#include <Servo.h>

Servo test_motor1;
Servo test_motor2;
Servo test_motor3;
Servo test_motor4;

int val=40;

void setup() {
  Serial.begin(9600);
  test_motor1.attach(11);
  test_motor2.attach(10);
  test_motor3.attach(9);
  test_motor4.attach(6);


  
  test_motor1.write(60);
  test_motor2.write(60);
  test_motor3.write(60);
  test_motor4.write(60);
  delay(3000);
}

void loop() {
  if(Serial.available()){
    char temp = Serial.read();
    if(temp=='u'){
      val += 5;
    }
    else if (temp=='d'){
      val -= 5;
      
    }
    test_motor1.write(val);
    test_motor2.write(val);
    test_motor3.write(val);
    test_motor4.write(val);
  }
  Serial.print("current value : ");
  Serial.println(val);
  delay(100);
}


// motor control by val
// signal with write line

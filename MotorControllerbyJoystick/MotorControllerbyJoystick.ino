#include <Servo.h>

Servo Servo_x, Servo_y;

int const joyPin_x = A0, joyPin_y = A1;
int joyVal_x, joyVal_y;
int angle_x, angle_y;
void setup(){
  Servo_x.attach(9);
  Servo_y.attach(8);
  Serial.begin(9600);
}

void loop(){
  joyVal_x = analogRead(joyPin_x);
  joyVal_y = analogRead(joyPin_y);
  Serial.print("joyVal_x: ");
  Serial.print(joyVal_x);
  Serial.print("joyVal_y: ");
  Serial.print(joyVal_y);
  angle_x = map(joyVal_x, 0, 1023, 0, 179);
  angle_y = map(joyVal_y, 0, 1023, 0, 179);
  Serial.print(", angle_x: ");
  Serial.print(angle_x);
  Serial.print(", angle_y: ");
  Serial.println(angle_y);
  Servo_x.write(angle_x);
  Servo_y.write(angle_y);
  delay(15);
}

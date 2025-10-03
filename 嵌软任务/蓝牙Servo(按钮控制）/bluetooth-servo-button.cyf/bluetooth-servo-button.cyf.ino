#include <Servo.h>
Servo myServo; 
int angle = 0;  
void setup() 
{
  
  myServo.attach(9);
  Serial.begin(9600); 
}
void loop() 
{
  if (Serial.available() > 0) 
  {
    char cmd = Serial.read();
    switch(cmd) 
    {
      case '0': angle = 0; break;
      case '1': angle = 45; break;
      case '2': angle = 90; break;
      case '3': angle = 180; break;
      default: break;
    }
    myServo.write(angle);
    Serial.print("已转动到：");
    Serial.println(angle);
  }
}

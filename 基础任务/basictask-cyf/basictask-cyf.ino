#include <Servo.h>
Servo myservo;
int pos[]={0,30,45,90,135};
void setup() 
{
 myservo.attach(9);
}

void loop()
 {
for(int i=0;i<5;i++)
{
  myservo.write(pos[i]);
  delay(500);
}
for(int i=4;i>=0;i--)
{
  myservo.write(pos[i]);
  delay(500);
}
}

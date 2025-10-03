#include <Servo.h>   
Servo myservo;
void setup() 
{
  myservo.attach(11);
  delay(200);

  myservo.write(90);
  delay(10);

  Serial.begin(9600);
}

void loop() 
{
  if (Serial.available()>0) 
  {  
    int toPos = Serial.parseInt();
    int fromPos = myservo.read();
    if (fromPos <= toPos)
    {  
      for (int i=fromPos; i<=toPos; i++)
      {
      myservo.write(i);
      delay (50);
      }
    } 
    else 
    { 
    for (int i=fromPos; i>=toPos; i--)
      {
      myservo.write(i);
      delay (50);
      }
    }
  }
}
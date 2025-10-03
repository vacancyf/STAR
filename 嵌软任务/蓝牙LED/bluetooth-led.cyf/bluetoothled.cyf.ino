char serialData;
 void setup() 
 {
  Serial.begin(9600);
  pinMode(11, OUTPUT); 
 }
void loop()
{
  if( Serial.available()>0 )
  { 
    serialData =  Serial.read();   
    
    if (serialData == '1' )
     { 
      Serial.print("Got command: "); 
      Serial.println(serialData); 
      Serial.println("LED-ON");
      
      digitalWrite(11, HIGH); 
    }
     else 
    {   
      Serial.print("Got command: ");  
      Serial.println(serialData); 
      Serial.println("LED-OFF");
 
      digitalWrite(11, LOW);   
    }      
  }
}
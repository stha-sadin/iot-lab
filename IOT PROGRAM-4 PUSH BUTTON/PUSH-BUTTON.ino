int buttonstate=0;
void setup()
{
 pinMode(13,OUTPUT);
 pinMode(2,INPUT);
}

void loop()
{
   buttonstate=digitalRead(2);
  if(buttonstate==HIGH)
  {
    digitalWrite(13,HIGH);
  }
  else
  {
    digitalWrite(13,LOW);
  }
  
}

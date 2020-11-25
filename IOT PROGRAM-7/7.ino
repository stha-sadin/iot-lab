int LDR =A0;
int LDRValue = 0;
int light_sensitivity = 500;

void setup()
{
  Serial.begin(9600);
  pinMode(11, OUTPUT);
}

void loop()
{
  LDRValue = analogRead(LDR);
  Serial.println(LDRValue);
  delay(50);
  if(LDRValue < light_sensitivity)
  {
    digitalWrite(11,HIGH);
  }
  else 
  {
    digitalWrite(11, LOW);
  }
  
  delay(1000);
}

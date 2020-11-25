int sensorState = 0;
void setup()
{
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  sensorState = digitalRead(2);
  if(sensorState == HIGH)
  {
  	digitalWrite(13, HIGH);
    Serial.println("Sensor activated");
  }
  else
  {
  	digitalWrite(13, LOW);
  }  
  
  delay(10);
}

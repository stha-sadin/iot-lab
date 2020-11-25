void setup()
{ Serial.begin(9600);
  pinMode(9, OUTPUT);
}

void loop()
{
  int analog=analogRead(A0);
  int brightness=map(analog,0,1023,0,255);
  analogWrite(9,brightness);
  Serial.print("\n analog value");
   Serial.print(analog);
   Serial.print("\n brightness value");
   Serial.print(brightness);
}

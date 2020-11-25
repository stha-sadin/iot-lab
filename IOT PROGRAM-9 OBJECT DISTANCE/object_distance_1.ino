int trigPin = 4;   
int echoPin = 2;    
long duration, cm, inches;
 
void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}
 
void loop()
{
 
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
 
  cm = (duration/2) / 29.1;
  inches = (duration/2) / 74; 
  Serial.print("Distance: ");
  Serial.print(inches);
  Serial.print("inches, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  
  delay(250);
}
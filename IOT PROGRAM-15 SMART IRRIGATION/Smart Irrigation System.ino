#include <Servo.h>
Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards
 
int pos = 0;    // variable to store the servo position
 
 
int sensorPin = A0;    // select the input pin for the potentiometer
int sensorValue = 0;  // variable to store the value coming from the sensor
void setup() {
myservo.attach(9);  // attaches the servo on pin 9 to the servo object
Serial.begin(9600);
}
void loop() {
 // read the value from the sensor:
sensorValue = analogRead(sensorPin);
Serial.println (sensorValue);
if(sensorValue>500)
{
 for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
   // in steps of 1 degree
   myservo.write(pos);              // tell servo to go to position in variable 'pos'
   delay(15);                       // waits 15ms for the servo to reach the position
 }
 for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
   myservo.write(pos);              // tell servo to go to position in variable 'pos'
   delay(15);                       // waits 15ms for the servo to reach the position
 }
}
delay (1000);
}
#include<Servo.h>
Servo a;
void setup() 
{
 Serial.begin(9600); 
 Serial.println("Started project");
 a.attach(9);
 a.write(0);
 pinMode(2, INPUT);
}
void loop() 
{ 
 
 if( digitalRead(2) == LOW)
 {
 Serial.println("Object detect");
 for(int i=0; i<=120; i++)
 {
a.write(i);
 delay(20);
 }
 delay(2000);
 for(int i=90; i>=0; i--)
 {
 a.write(i);
 delay(20);
 }
 }
 else
 {
 Serial.println("nothing found");
 a.write(0);
 } 
}
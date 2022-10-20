#include <Servo.h>
int input = 7; 
int state = LOW; 
int value = 0; 
Servo servomotor;
int position = 0;
void setup()
{ 
 pinMode(input, INPUT); 
 servomotor.attach(8);
 Serial.begin(9600);
}
void loop()
{
 value = digitalRead(input); 
 if (value == HIGH)
{ 
 if (state == LOW)
 {
 Serial.println("Motion detected!");
 for (position = 0; position <= 180; position += 1) 
{ 
 servomotor.write(position); 
 delay(30); 
 }
 state = HIGH;
 }
 }
else
{
 if (state == HIGH)
 {
 Serial.println("Motion ended!");
 for (position = 180; position >= 0; position -= 1)
 { 
 servomotor.write(position); 
 delay(30); 
 }
 state = LOW;
 }
 }
}
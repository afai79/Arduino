
#include <Servo.h>
Servo myservo;   

#define BLUE 9
#define GREEN 10
#define RED 11


void setup()
{
  myservo.attach(6);
pinMode(RED, OUTPUT);
pinMode(GREEN, OUTPUT);
pinMode(BLUE, OUTPUT);

}

// main loop


void loop()
{
digitalWrite(RED, HIGH);
digitalWrite(GREEN, LOW);
digitalWrite(BLUE, LOW);

   myservo.write(30); 

  delay(1000);
  
digitalWrite(RED, LOW);
digitalWrite(GREEN, HIGH);
digitalWrite(BLUE, LOW);

 myservo.write(60); 
  delay(1000);

digitalWrite(RED, LOW);
digitalWrite(GREEN, LOW);
digitalWrite(BLUE, HIGH);

   myservo.write(90); 
  delay(1000);

}
/*
  modified on Sep 28, 2020
  Modified by MohammedDamirchi from Arduino Examples
  https://electropeak.com/learn/
*/

#include <Servo.h>
Servo myservo;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  myservo.attach(9);
  pinMode(13, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  delay(20);

  if (sensorValue > 150)
  {
      myservo.write(30);
      digitalWrite(13, HIGH);
   }
   else
   {
      myservo.write(150);
      digitalWrite(13, LOW); 
   }
}

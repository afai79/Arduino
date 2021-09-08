int trigPin = 11;    // Trigger
int echoPin = 12;    // Echo
long duration, cm, inches;

#include <Servo.h>
Servo myservo;    

int sensor = A0;
int val = 0;
int limit = 47;

void setup() {
  //Serial Port begin
  Serial.begin (9600);
  //Define inputs and outputs
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  myservo.attach(9);
}
 
void loop() {
  // The sensor is triggered by a HIGH pulse of 10 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
  // Read the signal from the sensor: a HIGH pulse whose
  // duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
 
  // Convert the time into a distance
  cm = (duration/2) / 29.1;     // Divide by 29.1 or multiply by 0.0343
  inches = (duration/2) / 74;   // Divide by 74 or multiply by 0.0135
  
 // Serial.print(inches);
 // Serial.print("in, ");
 // Serial.print(cm);
 // Serial.print("cm");
 // Serial.println();
  
  delay(250);
   
  if (cm < 100)
  { myservo.write(30);}
  else 
   { myservo.write(120);}

  val = analogRead(sensor);
  Serial.println(val);
  if (val > 100) {
    tone(8, 650);
  }
 delay(300);
 noTone(8);

}

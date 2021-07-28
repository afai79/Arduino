#include <Servo.h>
Servo myservo;
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);  

void setup() {
  myservo.attach(9);
  pinMode(13, OUTPUT);
  Serial.begin(9600);

   lcd.init();                      // initialize the lcd 
   lcd.backlight();
}

void loop() {
 
  int sensorValue = analogRead(A0); // Gas value
 
  Serial.println(sensorValue);
  delay(20);

  if (sensorValue > 200)
  {
      myservo.write(30);
      digitalWrite(13, HIGH);
      lcd.setCursor(0,0);
      lcd.print("Gas value is High");
   }
   else
   {
      myservo.write(200);
      digitalWrite(13, LOW); 
      lcd.setCursor(0,0);
      lcd.print("Gas value is Normal");
   }
}

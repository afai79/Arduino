#define BLUE 9
#define GREEN 10
#define RED 11
  
int resval = 0;  // holds the value
int respin = A5; // sensor pin used

void setup() { 
   // start the serial console
  Serial.begin(9600);
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
} 
  
void loop() { 
   resval = analogRead(respin); //Read data from analog pin and store it to resval variable
   
  if (resval<=100)
  { 
    Serial.println("Water Level: Empty");
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);} 
  else if (resval>100 && resval<=300){ 
    Serial.println("Water Level: Low"); 
     digitalWrite(RED, LOW);
    digitalWrite(GREEN, HIGH);
    digitalWrite(BLUE, LOW);}
  else if (resval>300 && resval<=330){ 
    Serial.println("Water Level: Medium");
     digitalWrite(RED, LOW);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, HIGH);} 
  else if (resval>330){   
    Serial.println("Water Level: High");
    digitalWrite(RED, LOW);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW); 
  }
  delay(1000); 
}

int sensor = A0;
int val = 0;
int limit = 47;


void setup() {
  Serial.begin(9600);  
}

void loop() {
  val = analogRead(sensor);
  Serial.println(val);
  if (val > 100) {
    tone(8, 650);
  }
  delay(300);
  noTone(8);
}

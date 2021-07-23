/*
  Display 0 to 9 Numbers on 7Segment Display.
 */
// give it a name:
int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;
// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(a, OUTPUT);   
  pinMode(b, OUTPUT); 
  pinMode(c, OUTPUT); 
  pinMode(d, OUTPUT); 
  pinMode(e, OUTPUT); 
  pinMode(f, OUTPUT); 
  pinMode(g, OUTPUT); 
}
// the loop routine runs over and over again forever:
void loop() {
   //Disply 0
  digitalWrite(a, HIGH);   
  digitalWrite(b, HIGH);  
  digitalWrite(c, HIGH);   
  digitalWrite(d, HIGH);   
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
  delay(1000);  
  //Disply 1
  digitalWrite(a, LOW);   
  digitalWrite(b, HIGH);  
  digitalWrite(c, HIGH);   
  digitalWrite(d, LOW);   
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  delay(1000);  
  //Disply 2
  digitalWrite(a, HIGH);   
  digitalWrite(b, HIGH);  
  digitalWrite(c, LOW);   
  digitalWrite(d, HIGH);   
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
   delay(1000); 
  //Disply 3 
  digitalWrite(a, HIGH);   
  digitalWrite(b, HIGH);  
  digitalWrite(c, HIGH);   
  digitalWrite(d, HIGH);   
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
   delay(1000); 
  //Disply 4 
  digitalWrite(a, LOW);   
  digitalWrite(b, HIGH);  
  digitalWrite(c, HIGH);   
  digitalWrite(d, LOW);   
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
   delay(1000); 
  //Disply 5 
 
  digitalWrite(a, HIGH);   
  digitalWrite(b, LOW);  
  digitalWrite(c, HIGH);   
  digitalWrite(d, HIGH);   
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
   delay(1000);  
    //Disply 6
  digitalWrite(a, HIGH);   
  digitalWrite(b, LOW);  
  digitalWrite(c, HIGH);   
  digitalWrite(d, HIGH);   
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
   delay(1000);  
    //Disply 7
  digitalWrite(a, HIGH);   
  digitalWrite(b, HIGH);  
  digitalWrite(c, HIGH);   
  digitalWrite(d, LOW);   
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
   delay(1000);  
   //Disply 8
  digitalWrite(a, HIGH);   
  digitalWrite(b, HIGH);  
  digitalWrite(c, HIGH);   
  digitalWrite(d, HIGH);   
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
   delay(1000);  
     //Disply 9
  digitalWrite(a, HIGH);   
  digitalWrite(b, HIGH);  
  digitalWrite(c, HIGH);   
  digitalWrite(d, HIGH);   
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
   delay(1000);  
  }

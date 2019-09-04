int m = 8;
int y = 9;
int k = 10;
int s = 11;


void setup() {
  pinMode(m, OUTPUT);
  pinMode(y, OUTPUT);
  pinMode(k, OUTPUT);
  pinMode(s, OUTPUT);
}


void loop() {
  digitalWrite(m, HIGH);   
  digitalWrite(y, LOW);   
  digitalWrite(k, LOW);   
  digitalWrite(s, LOW);   
  delay(1000);
   digitalWrite(m, LOW);   
  digitalWrite(y, HIGH);   
  digitalWrite(k, LOW);   
  digitalWrite(s, LOW);   
  delay(1000);
   digitalWrite(m, LOW);   
  digitalWrite(y, LOW);   
  digitalWrite(k, HIGH);   
  digitalWrite(s, LOW);   
  delay(1000);
   digitalWrite(m, LOW);   
  digitalWrite(y, LOW);   
  digitalWrite(k, LOW);   
  digitalWrite(s, HIGH);   
  delay(1000);
   digitalWrite(m, LOW);   
  digitalWrite(y, LOW);   
  digitalWrite(k, HIGH);   
  digitalWrite(s, LOW);   
  delay(1000);
   digitalWrite(m, LOW);   
  digitalWrite(y, HIGH);   
  digitalWrite(k, LOW);   
  digitalWrite(s, LOW);   
  delay(1000);

    
}

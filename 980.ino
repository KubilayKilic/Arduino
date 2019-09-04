const int mled = 12; // 1 numaralı pinde hep yanmaya devam etti 12 ye aldım 
const int m1led = 2;
const int yled = 3;
const int y1led = 4;
const int sled = 5;
const int s1led = 6;
const int kled = 7;
const int k1led = 8;
const int buzzer = 9;
const int trig = 10; 
const int echo = 11;


float period = 0;
float distence = 0;


void setup() {
       // put your setup code here, to run once:
pinMode (trig, OUTPUT );
pinMode (mled, OUTPUT );
pinMode (m1led, OUTPUT );
pinMode (yled, OUTPUT );
pinMode (y1led, OUTPUT );
pinMode (sled, OUTPUT );
pinMode (s1led, OUTPUT );
pinMode (kled, OUTPUT );
pinMode (k1led, OUTPUT );
pinMode (buzzer, OUTPUT);


pinMode (echo, INPUT);
Serial.begin(9600);



}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trig, HIGH);
delayMicroseconds(1000);
digitalWrite(trig, LOW);



period = pulseIn(echo, HIGH);
distence = (period/2) / 29.1 ;


if (distence <= 5 )
{
  digitalWrite(k1led, HIGH );
  digitalWrite(buzzer, HIGH );
  delay(50);
  digitalWrite(k1led, LOW );
  digitalWrite(buzzer, LOW );
  delay(50);
  }

 else if (distence <= 10 )
{
  digitalWrite(kled, HIGH );
  digitalWrite(buzzer, HIGH );
  delay(100);
  digitalWrite(kled, LOW );
  digitalWrite(buzzer, LOW );
  delay(100);
  }

else if (distence <= 15 )
{
  digitalWrite(s1led, HIGH );
  digitalWrite(buzzer, HIGH );
  delay(150);
  digitalWrite(s1led, LOW );
  digitalWrite(buzzer, LOW );
   delay(150);
  }

  else if (distence <= 20 )
{
  digitalWrite(sled, HIGH );
  digitalWrite(buzzer, HIGH );
  delay(200);
  digitalWrite(sled, LOW );
  digitalWrite(buzzer, LOW );
  delay(200);
  }

  else if (distence <= 25 )
{
  digitalWrite(y1led, HIGH );
  digitalWrite(buzzer, HIGH );
  delay(300);
  digitalWrite(y1led, LOW );
  digitalWrite(buzzer, LOW );
   delay(300);
  }

  else if (distence <= 30 )
{
  digitalWrite(yled, HIGH );
  digitalWrite(buzzer, HIGH );
  delay(400);
  digitalWrite(yled, LOW );
  digitalWrite(buzzer, LOW );
  delay(400);
  }

  else if (distence <= 35 )
{
  digitalWrite(m1led, HIGH );
  digitalWrite(buzzer, HIGH );
  delay(500);
  digitalWrite(m1led, LOW );
  digitalWrite(buzzer, LOW );
  delay(500);
  }

  else if (distence <= 40 )
{
  digitalWrite(mled, HIGH );
  digitalWrite(buzzer, LOW );
  delay(1000);
  digitalWrite(mled, LOW );
  digitalWrite(buzzer, LOW );
  delay(1000); 
  }

  
  
 Serial.print(" distence: " );
 Serial.print(distence);
 delay(100);

}

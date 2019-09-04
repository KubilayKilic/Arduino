const int trig = 10; // 2 led ile mesafeye göre sinyal veren sensör
const int echo = 11;
const int sled = 7;
const int kled = 6;

int period = 0;
int distence = 0;


void setup() {
       // put your setup code here, to run once:
pinMode (trig, OUTPUT );
pinMode (sled, OUTPUT );
pinMode (kled, OUTPUT );
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


if (distence <= 10 )
{
  digitalWrite(kled, HIGH );
  delay(100);
  digitalWrite(kled, LOW );
  }

 else if (distence <= 50 )
{
  digitalWrite(sled, HIGH );
  delay(100);
  digitalWrite(sled, LOW );
  }

 Serial.print(" distence: " );
 Serial.print(distence);
 delay(100);

}

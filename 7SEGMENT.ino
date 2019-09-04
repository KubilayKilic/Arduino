void setup()
{

pinMode(13,OUTPUT);//a
pinMode(12,OUTPUT);//b
pinMode(11,OUTPUT);//c
pinMode(10,OUTPUT);//d
pinMode(9,OUTPUT);//e
pinMode(8,OUTPUT);//f
pinMode(7,OUTPUT);//g
}

void loop()
{
int i ;

for (i=0 ; i < 10 ; i++){

sayac(i);
delay(400);
}
}
void sayac (int i)
{
  switch(i)
  {

 case 0:
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      digitalWrite(9, LOW);
      digitalWrite(8, LOW);
      digitalWrite(7, HIGH);
      break;


     case 1:
      digitalWrite(13, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(7, HIGH);
      break;


     case 2:
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(9, LOW);
      digitalWrite(8, HIGH);
      digitalWrite(7, LOW);
      break;


     case 3:
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(7, LOW);
      break;


    case 4:
      digitalWrite(13, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(8, LOW);
      digitalWrite(7, LOW);
      break;

  case 5:
      digitalWrite(13, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      digitalWrite(9, HIGH);
      digitalWrite(8, LOW);
      digitalWrite(7, LOW);
      break;


    case 6:
      digitalWrite(13, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      digitalWrite(9, LOW);
      digitalWrite(8, LOW);
      digitalWrite(7, LOW);
      break;


    case 7:
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(7, HIGH);
      break;



    case 8:
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      digitalWrite(9, LOW);
      digitalWrite(8, LOW);
      digitalWrite(7, LOW);
      break;


    case 9:
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(8, LOW);
      digitalWrite(7, LOW);
      break;


}
}

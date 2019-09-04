/* Digital Saat UYGULAMASI gösterge uygulaması;
 * 0-9 arası rakamları ardışıl olarak sayar.
 */
const byte BUTON = 2;
const byte BUTON_geri = 1;

byte sn_L;
byte sn_H;
byte dk_L;
byte dk_H;
byte saat_L;
byte saat_H;


unsigned long lastTime = 0; // Last time the LED changed state
int interval = 1000; // interval between the blinks in milliseconds



void setup() {
  // put your setup code here, to run once:

 pinMode(13,OUTPUT);  // a segmenti çıkış
 pinMode(12,OUTPUT);  // b segmenti çıkış
 pinMode(11,OUTPUT);  // c segmenti çıkış
 pinMode(10,OUTPUT);  // d segmenti çıkış
 pinMode(9,OUTPUT);  // e segmenti çıkış
 pinMode(8,OUTPUT);  // f segmenti çıkış
 pinMode(7,OUTPUT);  // g segmenti çıkış
 pinMode(6,OUTPUT);  // Anod dk_L
 pinMode(5,OUTPUT);  // Anod dk_H
 pinMode(4,OUTPUT);  // Anod saat_L 
 pinMode(3,OUTPUT);  // Anod saat_H
 
pinMode(BUTON, INPUT);   // BUTON pini giriş olarak atandı
pinMode(BUTON_geri, INPUT);   // BUTON_geri pini giriş olarak atandı
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  yedili_gosterge(saat_H);
  
  delay(5);


  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  yedili_gosterge(saat_L);
  
  delay(5);


  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(3, LOW);
  yedili_gosterge(dk_H);
  
  delay(5);


  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);
  yedili_gosterge(dk_L);
  
  delay(5);


if (digitalRead(BUTON)==LOW)       // HHIZLI dakika ARTIRMA botonu 
{
dk_L ++;
sn_H=0;
sn_L=0;


if (dk_L==10) {dk_L=0; dk_H ++;}
if (dk_H==6) {dk_H=0; saat_L ++;}
if (saat_L==10) {saat_L=0; saat_H ++;}


if (saat_H==2) {
                 if (saat_L==4) {saat_L=0; saat_H=0;}
               }
 
}



if (digitalRead(BUTON_geri)==LOW)      // YAVAŞ dakika AZALTMA botonu 
{
dk_L --;
sn_H=0;
sn_L=0;


if (dk_L==255) {dk_L=9; dk_H --;        //Geri saydırmada byte değişkeninin 0'dan 255'e geçerken 9'a set edilir.

                if (dk_H==255) {dk_H=5; saat_L --;}

                }

if (saat_L==255) {saat_L=9; saat_H --;

                  if (saat_H==255) {saat_H=2; saat_L=3; }

                 }


  while (digitalRead(BUTON_geri)==LOW)      // HALA BASILI MI?????    
    {
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  yedili_gosterge(saat_H);
  
  delay(5);
  
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  yedili_gosterge(saat_L);
  
  delay(5);

  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(3, LOW);
  yedili_gosterge(dk_H);
  
  delay(5);

  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);
  yedili_gosterge(dk_L);
  
  delay(5);
           }
}


unsigned long currentTime = millis();

// Compare the current time with the last time
if (currentTime - lastTime >= interval){
  
// First we set the previous time to the current time
lastTime = currentTime;

sn_L ++;

if (sn_L==10) {sn_L=0; sn_H ++;}
if (sn_H==6) {sn_H=0; dk_L ++;}


if (dk_L==10) {dk_L=0; dk_H ++;}
if (dk_H==6) {dk_H=0; saat_L ++;}
if (saat_L==10) {saat_L=0; saat_H ++;}

if (saat_H==2) {
                 if (saat_L==4) {saat_L=0; saat_H=0;}
               }

}

}




void yedili_gosterge(int rakam) 
   {
    switch(rakam)
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




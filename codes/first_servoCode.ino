//====//====//====//====//====//====//====//====//====//
// --- Includes --- //
#include <Servo.h>


//====//====//====//====//====//====//====//====//====//
// --- Mapeamento de hardware --- //


//====//====//====//====//====//====//====//====//====//
// --- Variaveis globais --- //
int pos = 0;


//====//====//====//====//====//====//====//====//====//
// --- Objetos --- //
Servo oServo;


void setup() 
{
  oServo.attach(4);
  oServo.write(90);
  delay(3000);
    for(pos = 90; pos<=180; pos++)
  {
    oServo.write(pos);
    delay(10);
  }
}

void loop() 
{
  for(pos; pos>=0; pos--)
  {
    oServo.write(pos);
    delay(10);
  }
  delay(50);
    for(pos; pos<=180; pos++)
  {
    oServo.write(pos);
    delay(10);
  }
}

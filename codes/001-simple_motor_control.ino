//======Motor A======//
int ENA = 2; //Velocidade
int IN1 = 3; 
int IN2 = 4;
//======Motor B======//
/*
int ENA = 2; //Velocidade
int IN1 = 3; 
int IN2 = 4;
*/
void setup() 
{
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
}

void loop() 
{
  delay(1000);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  delay(1000);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
}

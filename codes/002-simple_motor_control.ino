//======Motor A======//
int VA = 6; //Velocidade A
int IN1 = 7; 
int IN2 = 8;
//======Motor B======//
int VB = 11; //Velocidade B
int IN3 = 12; 
int IN4 = 13;
void setup() 
{
  //===Configurando gpios
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(VA, OUTPUT);
  pinMode(VB, OUTPUT);

  //===Ajustando velocidade
  analogWrite(VA, 63);
  analogWrite(VB, 63);

  delay(1000);

  //===Ligando motor A
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  //===Ligando motor B
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);

  delay(7000);

  //===Desligando motor A
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  //===Desligando motor B
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

void loop() 
{


  
}

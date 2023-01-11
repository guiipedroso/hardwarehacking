/*
  Title: 
  Author: Guilherme Pedroso de Lima
  Date: Jan 2023
  Updated: --
*/ 

const int pot = A1;
int led = 13;
int variable = 0;
int blink;

void 
setup() 
  {
  pinMode(pot, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);  
  }

void
loop()
  {
  variable = analogRead(pot);
  Serial.println(variable);
  digitalWrite(led, HIGH);
  blink = variable/10;
  delay(blink);
  digitalWrite(led, LOW);
  blink = variable/10;
  delay(blink);  
  }

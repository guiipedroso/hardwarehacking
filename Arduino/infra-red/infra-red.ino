/*
  Title: IR
  Author: Guilherme Pedroso de Lima
  Date: Jan 2023
  Updated: --
*/ 

int detected = 0;
const int IR = 12;
const int led_out = 13;
const int speaker = 10;

void
setup()
  {
  pinMode(IR, INPUT);
  pinMode(led_out, OUTPUT);
  pinMode(speaker, OUTPUT);  
  digitalWrite(IR,HIGH);
  Serial.begin(9600);
  }

void
loop()
  {
  detected = digitalRead(IR);
  
  if(0 == detected)
    {
    digitalWrite(led_out, HIGH);
    tone(speaker, 233 );
    }
  else
    {
    digitalWrite(led_out, LOW);
    noTone(speaker);
    }
  Serial.print("IR = ");
  Serial.println(+detected);
  }

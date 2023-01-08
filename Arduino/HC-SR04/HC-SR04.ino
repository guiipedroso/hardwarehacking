/*
  Title: HC-SR04
  Author: Guilherme Pedroso de Lima
  Date: Jan 2023
  Updated: --
*/ 

const int speaker = 10;
const int trig = 5;
const int echo = 4;
float speed = (331.5 + (0.6*20)); //ms

void
setup()
  {
  pinMode(speaker, OUTPUT); //speaker
  pinMode(trig, OUTPUT); // transmission
  pinMode(echo, INPUT);  // receive pulse
  Serial.begin(9600); 
  }

float 
distance_cm()
  {
  //ping
  digitalWrite(trig, LOW);
  delayMicroseconds(3);
  digitalWrite(trig, HIGH);
  delayMicroseconds(5);
  digitalWrite(trig, LOW);
  //pong
  float tUS = pulseIn(echo, HIGH);
  float t = tUS / 1000.0 / 1000.0/ 2.0; //s
  float d = t * speed; // m
  return(d*100); //cm
  }

void 
loop()
  {
  int d = distance_cm();
  Serial.print("Distance = ");
  Serial.print(d, DEC); //Variable, DECIMAL
  Serial.println(+" cm/s");
  if(d <= 30)
    {
    tone(speaker, 368);      
    }
  else
    {
    noTone(speaker);
    }
  delay(250);
  }



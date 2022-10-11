/*
Title: SOS
Author: Guilherme Pedroso
Date: Oct 2022
Updated: --

*/

const int led = 8;

void 
setup()
  {
  pinMode(led, OUTPUT);
  }

void
loop()
  {
  /* Morse */

  /* Short */
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(300);
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(300);
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(300);

  /* Long */
  digitalWrite(led, HIGH);
  delay(1500);
  digitalWrite(led, LOW);
  delay(300);
  digitalWrite(led, HIGH);
  delay(1500);
  digitalWrite(led, LOW);
  delay(300);
  digitalWrite(led, HIGH);
  delay(1500);
  digitalWrite(led, LOW);
  delay(300);

  /* Short */
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(300);
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(300);
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(3000);
  }

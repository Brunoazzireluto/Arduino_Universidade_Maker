//projeto 8 acionando servo motor

#include <Servo.h>

Servo meuServo;
int botao = 7;

void setup() {
  pinMode(botao, INPUT_PULLUP); // definindo botão como saida
}

void loop() {
  meuServo.attach(9);
  if (digitalRead(botao) == LOW)
  {
    for(int angulo=0; angulo<=60; angulo++) // aumenta o angulo do servo motor até chegar em 180 graus
    {
      meuServo.write(angulo);
      delay(10);
    }
    for(int angulo=60 ; angulo>0; angulo--) // diminui o angulo do servo
    {
      meuServo.write(angulo);
      delay(10);
    }    
  }
  meuServo.detach();

}

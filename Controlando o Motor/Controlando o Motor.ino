//projeto 9 Controlando servo motor

#include <Servo.h>

Servo meuServo;
int pinoPot = A0;
int valorPot;

void setup() {
  meuServo.attach(9);
}

void loop() {
  valorPot = analogRead(pinoPot);
  valorPot = map(valorPot, 0, 1023, 0, 180); // mapeia os valores do potenciometro
  meuServo.write(valorPot);
  delay(15);
}

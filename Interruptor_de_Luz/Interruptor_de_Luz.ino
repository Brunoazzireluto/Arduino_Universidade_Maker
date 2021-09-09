//   Projeto 5 - <span style="font-weight: 400">Interruptor de luz</span>
//autor: Bruno

int botao = 7;
int led = 13;
bool estadoLed = 0;


void setup() {
  pinMode(botao, INPUT_PULLUP); // define o pino do botão como entrada 'INPUT'
  pinMode(led, OUTPUT);
}

void loop() {
  if(digitalRead(botao) == LOW) // se o botão for pressionado
  {
    estadoLed = !estadoLed; // troca o estado do led
    digitalWrite(led, estadoLed);
    while(digitalRead(botao) == LOW);
    delay(100);
  }
}

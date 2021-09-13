//Projeto 12 alarme com ssensor laser

int pinoSensorLuz = A0;
int pinoBuzzer = 6;               
int valorLuz = 0; 

void setup() {
  //  configura o  pino do buzzer saida
  pinMode(pinoBuzzer, OUTPUT);
}

void loop() {
  valorLuz = analogRead(pinoSensorLuz);
  if (valorLuz < 950)
  {
    tone(pinoBuzzer, 440);
  }
  else
  {
    noTone(pinoBuzzer);
  }
  delay(10);
}

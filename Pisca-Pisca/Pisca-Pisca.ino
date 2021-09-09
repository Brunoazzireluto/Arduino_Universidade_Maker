void setup() {
  // Programa: Pisca Pisca
  //  autor: Azzireluto

  //definindo porta do led como saida
  pinMode(11, OUTPUT);

}

void loop() {
  // Acende o led
  digitalWrite(11, HIGH);

  //Aguarda um intervalo de tempo em Milissegundos
  delay(500);

  //Apaga o led
  digitalWrite(11,LOW);

  //Aguardaum intervalo de tempo em milissegundo
  delay(500);
}

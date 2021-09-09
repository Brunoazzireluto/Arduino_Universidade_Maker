//Projeto : Sinal de SOS com Led
// autor: Azzireluto

int pinoLed = 11;
void setup() {
  pinMode(pinoLed, OUTPUT);
}

void loop() {
  // s(...) Três pontos
  for (int x=0;x<3;x++) //repete tudo dentro das chaves três vezes
  {
   digitalWrite(pinoLed, HIGH); //acende o Led
   delay(150);                  //Aguarda
   digitalWrite(pinoLed, LOW);  // desliga o led
   delay(100);                  //aguarda novamente    
   }
  delay(200);

  //O (---) três linhas
  for (int x=0;x<3;x++)
  {
   digitalWrite(pinoLed, HIGH); 
   delay(450);                  
   digitalWrite(pinoLed, LOW);  
   delay(150);                     
   }
   delay(200);

  // s(...) Três pontos
  for (int x=0;x<3;x++)
  {
   digitalWrite(pinoLed, HIGH); 
   delay(150);                  
   digitalWrite(pinoLed, LOW);  
   delay(100);                     
   }
   delay(5000);
}

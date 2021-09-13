// Projeto 6 - Luzes Coloridas
//autor: Azzireluto

int led_R = 7;
int led_G = 6;
int led_B = 5;


void setup() {
  pinMode(led_R, OUTPUT);
  pinMode(led_G, OUTPUT);
  pinMode(led_B, OUTPUT);

}

void loop() {
  acendeVermelho(); // aqui fizemos uma pequena funcao que acende uma cor e apaga as outras
  delay(500);
  acendeVerde();
  delay(500);
  acendeAzul();
    delay(500);
    apagaLed();
  delay(1000);
}
  void acendeVermelho()
{
  digitalWrite(led_R, LOW);
  digitalWrite(led_G, HIGH);
  digitalWrite(led_B, HIGH);
}
 
void acendeVerde()
{
  digitalWrite(led_R, HIGH);
  digitalWrite(led_G, LOW);
  digitalWrite(led_B, HIGH);
}
 
void acendeAzul()
{
  digitalWrite(led_R, HIGH);
  digitalWrite(led_G, HIGH);
  digitalWrite(led_B, LOW);
}
 
void apagaLed()
{
  digitalWrite(led_R, HIGH);
  digitalWrite(led_G, HIGH);
  digitalWrite(led_B, HIGH);
}

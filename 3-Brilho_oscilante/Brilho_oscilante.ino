// Projeto: Brilho Oscilante
// autor: Azzireluto

int pinoLed = 10;

void setup() {
  pinMode(pinoLed, OUTPUT);
}

void loop() {
  acendeBrilho(5);
  apagaBrilho(5);
}
  void acendeBrilho(int incremento){
    //muda o brilho pelo loop for
    for  (byte value =  0; value <255 ;  value+=incremento){
      //controla o bilho do led
      analogWrite(pinoLed, value);
      delay(50);
    }
  }
  void apagaBrilho(int decreamento){
    for (byte  value = 255 ;value > 0; value-=decreamento){
      analogWrite(pinoLed, value);
      delay(50);
    }
  }

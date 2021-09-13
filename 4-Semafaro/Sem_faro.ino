//Projeto: Semáforo
//autor:azzireluto

//definindo  pinos a serem usados
int pedVerde = 9;
int pedVermelho = 8;
int carroVerde = 12;
int carroAmarelo = 11;
int carroVermelho = 10;

void setup() {
  //definindo saidas
  pinMode(pedVerde,  OUTPUT);
  pinMode(pedVermelho, OUTPUT);
  pinMode(carroVerde, OUTPUT);
  pinMode(carroAmarelo, OUTPUT);
  pinMode(carroVermelho, OUTPUT);

  //definindo posição inicial
  digitalWrite(carroVerde, HIGH);
  digitalWrite(carroAmarelo, LOW);
  digitalWrite(carroVermelho, LOW);
  digitalWrite(pedVerde,  LOW);
  digitalWrite(pedVermelho, HIGH);
}

void loop() {
  digitalWrite(carroVerde, HIGH); //acende o verde dos carros e o vemelho do pedrestre
  digitalWrite(pedVermelho, HIGH);
  delay(5000); // aguarda 5 segundos
  digitalWrite(carroVerde, LOW); // apaga o verde do carro e acendeo amarelo
  digitalWrite(carroAmarelo,HIGH);
  delay(3000); // aguarda 3 segundos
  digitalWrite(carroAmarelo, LOW); // acende o vermelho do carro  e o  verde dos pedrestes
  digitalWrite(carroVermelho, HIGH);
  digitalWrite(pedVermelho, LOW);
  digitalWrite(pedVerde, HIGH);
  delay(5000);
  digitalWrite(pedVerde, LOW);
  for (int x = 0; x<5 ; x++){
    digitalWrite(pedVermelho, HIGH);
    delay(250);
    digitalWrite(pedVermelho, LOW);
    delay(250);
  }
  digitalWrite(carroVermelho, LOW);


}

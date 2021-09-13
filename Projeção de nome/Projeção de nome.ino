// Projeção de nome No led de 7 segmentos 

int segE = 7;
int segD = 8;
int segC = 9;
int segB = 13;
int segA = 12;
int segF = 11;
int segG = 10;

void setup() {
  pinMode(segE, OUTPUT);
  pinMode(segD, OUTPUT);
  pinMode(segC, OUTPUT);
  pinMode(segB, OUTPUT);
  pinMode(segA, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);
}

void loop()
{
  acendeA();
  delay(1000);
  apagar();
  delay(200);
  acendeZ();
  delay(1000);
  apagar();
  delay(200);
  acendeZ();
  delay(1000);
  apagar();
  delay(200);
  acendeI();
  delay(1000);
  apagar();
  delay(200);
}
 
void apagar()
{
  digitalWrite(segE, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segA, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);  
}

void acendeA()
{
  digitalWrite(segE, LOW);
  digitalWrite(segD, HIGH);
  digitalWrite(segC, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segA, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
}

void acendeZ()
{
  digitalWrite(segA,LOW);
  digitalWrite(segB,LOW);
  digitalWrite(segG,LOW);
  digitalWrite(segE,LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segC, HIGH);
  digitalWrite(segF, HIGH);
}

void acendeI()
{
  digitalWrite(segE, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segC, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segA, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);  
}
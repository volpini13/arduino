/**
Operador lógico NOT
ligar/desligar led com um botão
 @author Arthur Garcia Volpini
*/

// varíaveis
int botao1;  //botão 1
void setup() {
  pinMode(13, OUTPUT);
  pinMode(2, INPUT_PULLUP);  // configurar o pino 2 como entrada
  Serial.begin(9600);
}

void loop() {
  botao1 = digitalRead(2);
  if (botao1 == 0) {
    digitalWrite(13, !digitalRead(13));
  } 
  delay(200); //minizar efeito mecânico de um botão
}

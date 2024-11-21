/**
 Uso do AND
 Simulador de uma prensa b-manual
 @author Arthur Garcia Volpini
*/

// varíaveis
int botao1;  //botão 1
int botao2;  //botão 2
void setup() {
  pinMode(13, OUTPUT);
  pinMode(2, INPUT_PULLUP);  // configurar o pino 2 como entrada
  pinMode(3, INPUT_PULLUP);  // configurar o pino 2 como entrada
  Serial.begin(9600);
}

void loop() {
  botao1 = digitalRead(3);
  botao2 = digitalRead(2);
  if (botao1 == 0 && botao2 == 0) {
    digitalWrite(13, 1);
  } else {
    digitalWrite(13, 0);
  }
}
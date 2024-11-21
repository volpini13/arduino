/**
 Acionamento de um LED com 2 botões
 @author Arthur Volpini
*/
int botao1;
int botao2;
void setup() {
  pinMode(13, OUTPUT);
  pinMode(3, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
}

void loop() {
  botao1 = digitalRead(3);  //leitura do botão (1 não pressionado 0 pressionado)
 Serial.println(botao1);
  if (botao1 == 0) {
    digitalWrite(13, 1);  //ler o estado do LED e inverter a lógica
  }
    botao2 = digitalRead(2);
    Serial.println(botao2);
    if (botao2 == 0) {
      digitalWrite(13,0);
  }
   }

/**
 ACIONAMENTO LED COM UM BOTÃO
 @author Arthur Garcia Volpini
*/

int botao; // variavel usada para armazenar leitura do botão
void setup(){
  pinMode(13, OUTPUT);
  pinMode(2, INPUT_PULLUP);
}

void loop() {
  botao = digitalRead(2); // leiura do botão (1 não pressionada | 0 pressionado)
  if(botao ==0){
    digitalWrite(13, HIGH); 
  } else {
    digitalWrite(13, LOW);
  }
}
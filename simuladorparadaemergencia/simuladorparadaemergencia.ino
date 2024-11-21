/**
Operador Lógico OR
Simulador parada de emergência escada rolante
 @author Arthur Garcia Volpini
*/

// varíaveis
int botao1;  //botão 1
int botao2;  //botão 2
void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, INPUT_PULLUP);  // configurar o pino 2 como entrada
  pinMode(2, INPUT_PULLUP);   // configurar o pino 2 como entrada
  Serial.begin(9600);
  digitalWrite(13, 1);
}

void loop() {
  ;
  botao1 = digitalRead(2);
  botao2 = digitalRead(12);
  if (botao1 == 0 || botao2 == 0) {
    digitalWrite(13, LOW);
  } 
}
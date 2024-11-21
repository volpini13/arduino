/**
 Sensor de Luminosidade
 @author Arthur Volpini 
*/

int sensor;  //Variável usado para armazenar o valor do Sensor de Luz


void setup() {
  Serial.begin(9600);   //iniciar a comunicação serial
  pinMode(13, OUTPUT);  //Led (saída)
}

void loop() {
  sensor = analogRead(A0);  //leitura da entrada analógica A0 -> sensor(0 a 1024)
  Serial.println(sensor);   //mostrar no terminal o valor do sensor
  // se leitura do sensor for menor que 500 está escuro
  if (sensor < 500)
    
  {
    digitalWrite(13, HIGH);  //acender o LED
  }
  else {                    //se for igual ou maior que 500 está claro
    digitalWrite(13, LOW);  //apagar o LED
  }
}

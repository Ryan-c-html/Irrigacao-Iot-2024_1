/* Definindo variaveis */

#define PinAnalog = A4;

int sinal; // Variavel que recebe o sinal analógico 


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, STM32!");

  pinMode( A4, INPUT);
}

void loop() {
  // Leitura do sinal analógico 
  sinal = analogRead(A4);

  Serial.print("Leitura do sinal: ");
  Serial.println(sinal);
}

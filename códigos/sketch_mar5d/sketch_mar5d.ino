float leitura;

void setup() {
  Serial.begin(9600);
  Serial.println("Leitura do potenciometro");
  Serial.println("Valor      Volts");
}

void loop() {
  int valor_analogico = analogRead(15);
  Serial.print(valor_analogico);
  Serial.print("      ");
  leitura = (valor_analogico * 3.3 / 1023);
  Serial.println(leitura, 2); // Mostrar apenas duas casas decimais
  delay(1500);
}
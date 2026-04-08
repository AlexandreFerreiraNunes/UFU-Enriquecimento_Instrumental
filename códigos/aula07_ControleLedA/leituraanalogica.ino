float leitura;

void setup()
{
  Serial.begin(9600);
  Serial.println("Leitura do potenciometro");
  Serial.println("Valor        Volts");
}

void loop()
{
  Serial.print(analogRead(2));
  Serial.print("         ");
  leitura = (analogRead(2)*3.3/1023);
  Serial.println(leitura);
  delay(1500);
}

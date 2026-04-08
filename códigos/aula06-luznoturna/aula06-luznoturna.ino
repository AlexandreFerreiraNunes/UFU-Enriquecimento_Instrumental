/*int LED = 15;
int SensorLuz = 2;
int valorLuz = 0;

void setup() 
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() 
{
  valorLuz = analogRead(SensorLuz);
  Serial.print(valorLuz);
  Serial.print("\n");
  if(valorLuz<550)
  {
    digitalWrite(LED, HIGH);
  }
  else
  {
    digitalWrite(LED, LOW);
  }
  delay(100);
}
*/
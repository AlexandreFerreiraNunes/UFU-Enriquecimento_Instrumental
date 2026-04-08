int LEDg1 = 15;
int LEDg2 = 2;
int LEDy1 = 4;
int LEDy2 = 5;
int LEDr1 = 18;
int LEDr2 = 19;

void setup()
{
  pinMode(LEDg1, OUTPUT);
  pinMode(LEDg2, OUTPUT);
  pinMode(LEDy1, OUTPUT);
  pinMode(LEDy2, OUTPUT);
  pinMode(LEDr1, OUTPUT);
  pinMode(LEDr2, OUTPUT);

  digitalWrite(LEDg1, HIGH);
  digitalWrite(LEDg2, LOW);
  digitalWrite(LEDy1, LOW);
  digitalWrite(LEDy2, LOW);
  digitalWrite(LEDr1, LOW);
  digitalWrite(LEDr2, LOW);
}

void loop()
{
  digitalWrite(LEDg1, HIGH);
  digitalWrite(LEDg2, LOW);
  delay(100);
  digitalWrite(LEDg2, HIGH);
  delay (100);
  digitalWrite(LEDy1, HIGH);
  delay (100);
  digitalWrite(LEDy2, HIGH);
  delay (100);
  digitalWrite(LEDr1, HIGH);
  delay (100);
  digitalWrite(LEDr2, HIGH);
  delay (100);
  digitalWrite(LEDr2, LOW);
  delay (100);
  digitalWrite(LEDr1, LOW);
  delay (100);
  digitalWrite(LEDy2, LOW);
  delay (100);
  digitalWrite(LEDy1, LOW);
  delay (100);
}
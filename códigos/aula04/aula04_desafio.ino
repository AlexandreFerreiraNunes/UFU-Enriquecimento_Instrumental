int LEDV = 2;
int LEDA = 4;

void setup() {
  pinMode(LEDV, OUTPUT);
  pinMode(LEDA, OUTPUT);
}

void loop() {
  digitalWrite(LEDV, HIGH);
  digitalWrite(LEDA, LOW);
  delay(1000);  

  digitalWrite(LEDV, LOW);
  digitalWrite(LEDA, HIGH);
  delay(1000);  
}

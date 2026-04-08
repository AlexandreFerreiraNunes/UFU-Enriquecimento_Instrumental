/*int segE = 2;
int segD = 5;
int segC = 4;
int segB = 23;
int segA = 22;
int segF = 19;
int segG = 18;

void acende(int numero)
{
  switch (numero) {
  case 0:
    digitalWrite(segE, LOW);
    digitalWrite(segD, LOW);
    digitalWrite (segC, LOW);
    digitalWrite(segB, LOW);
    digitalWrite (segA, LOW);
    digitalWrite(segF, LOW);
    digitalWrite(segG, HIGH);
  break;
  case 1:
    digitalWrite(segE, HIGH);
    digitalWrite(segD, HIGH);
    digitalWrite (segC, LOW);
    digitalWrite(segB, LOW);
    digitalWrite (segA, HIGH);
    digitalWrite(segF, HIGH);
    digitalWrite(segG, HIGH);
  break;
  case 2:
    digitalWrite(segE, LOW);
    digitalWrite(segD, LOW);
    digitalWrite (segC, HIGH);
    digitalWrite(segB, LOW);
    digitalWrite (segA, LOW);
    digitalWrite(segF, HIGH);
    digitalWrite(segG, LOW);
  break;
  case 3:
    digitalWrite(segE, HIGH);
    digitalWrite(segD, LOW);
    digitalWrite (segC, LOW);
    digitalWrite(segB, LOW);
    digitalWrite (segA, LOW);
    digitalWrite(segF, HIGH);
    digitalWrite(segG, LOW);
  break;
  case 4:
    digitalWrite(segE, HIGH);
    digitalWrite(segD, HIGH);
    digitalWrite (segC, LOW);
    digitalWrite(segB, LOW);
    digitalWrite (segA, HIGH);
    digitalWrite(segF, LOW);
    digitalWrite(segG, LOW);
  break;
  case 5:
    digitalWrite(segE, HIGH);
    digitalWrite(segD, LOW);
    digitalWrite (segC, LOW);
    digitalWrite(segB, HIGH);
    digitalWrite (segA, LOW);
    digitalWrite(segF, LOW);
    digitalWrite(segG, LOW);
  break;
  case 6:
    digitalWrite(segE, LOW);
    digitalWrite(segD, LOW);
    digitalWrite (segC, LOW);
    digitalWrite(segB, HIGH);
    digitalWrite (segA, LOW);
    digitalWrite(segF, LOW);
    digitalWrite(segG, LOW);
  break;
  case 7:
    digitalWrite(segE, HIGH);
    digitalWrite(segD, HIGH);
    digitalWrite (segC, LOW);
    digitalWrite(segB, LOW);
    digitalWrite (segA, LOW);
    digitalWrite(segF, HIGH);
    digitalWrite(segG, HIGH);
  break;
  case 8:
    digitalWrite(segE, LOW);
    digitalWrite(segD, LOW);
    digitalWrite (segC, LOW);
    digitalWrite(segB, LOW);
    digitalWrite (segA, LOW);
    digitalWrite(segF, LOW);
    digitalWrite(segG, LOW);
  break;
  case 9:
    digitalWrite (segE, HIGH);
    digitalWrite(segD, LOW);
    digitalWrite(segC, LOW);
    digitalWrite(segB, LOW);
    digitalWrite(segA, LOW);
    digitalWrite(segF, LOW);
    digitalWrite(segG, LOW);
  break;
  case 10:
    digitalWrite(segE, LOW);
    digitalWrite(segD, HIGH);
    digitalWrite (segC, LOW);
    digitalWrite(segB, LOW);
    digitalWrite (segA, LOW);
    digitalWrite(segF, LOW);
    digitalWrite(segG, LOW);
  break;
  case 11:
    digitalWrite(segE, LOW);
    digitalWrite(segD, LOW);
    digitalWrite (segC, LOW);
    digitalWrite(segB, HIGH);
    digitalWrite (segA, HIGH);
    digitalWrite(segF, LOW);
    digitalWrite(segG, LOW);
  break;
  case 12:
    digitalWrite(segE, LOW);
    digitalWrite(segD, LOW);
    digitalWrite (segC, HIGH);
    digitalWrite(segB, HIGH);
    digitalWrite (segA, LOW);
    digitalWrite(segF, LOW);
    digitalWrite(segG, HIGH);
  break;
  case 13:
    digitalWrite(segE, LOW);
    digitalWrite(segD, LOW);
    digitalWrite (segC, LOW);
    digitalWrite(segB, LOW);
    digitalWrite (segA, HIGH);
    digitalWrite(segF, HIGH);
    digitalWrite(segG, LOW);
  break;
  case 14:
    digitalWrite(segE, LOW);
    digitalWrite(segD, LOW);
    digitalWrite (segC, HIGH);
    digitalWrite(segB, HIGH);
    digitalWrite (segA, LOW);
    digitalWrite(segF, LOW);
    digitalWrite(segG, LOW);
  break;
  case 15:
    digitalWrite(segE, LOW);
    digitalWrite(segD, HIGH);
    digitalWrite (segC, HIGH);
    digitalWrite(segB, HIGH);
    digitalWrite (segA, LOW);
    digitalWrite(segF, LOW);
    digitalWrite(segG, LOW);
  break;
  }
}

void setup()
{
  pinMode(segE, OUTPUT);
  pinMode(segD, OUTPUT);
  pinMode(segC, OUTPUT);
  pinMode(segB, OUTPUT);
  pinMode(segA, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);
}

void loop ()
{
  static int i = 0;
  for(i = 0; i < 16; i++) {
    acende(i);
    delay (1000);
  }
}
*/
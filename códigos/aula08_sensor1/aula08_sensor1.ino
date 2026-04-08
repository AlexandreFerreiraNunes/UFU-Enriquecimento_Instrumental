const int trigPin = 15;
const int echoPin = 2;

#define velocidade_som 0.034

long duracao;
float distanciaCm;

void setup() {
 Serial.begin(9600);
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
}

void loop() {
 digitalWrite(trigPin, LOW);
 delayMicroseconds(2);

 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin, LOW);

 duracao = pulseIn(echoPin, HIGH);
 distanciaCm = duracao*velocidade_som/2;
 Serial.print("Distância = ");
 Serial.print(distanciaCm);
 Serial.println("cm");
 Serial.println("-------------------");
 delay(500);
}

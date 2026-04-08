// Display de 7 Segmentos
int segPins[] = {12, 13, 14, 15, 4, 5, 18}; // A, B, C, D, E, F, G
int digitCount = 0;

// LDR
const int LDRPin = 34;  // Pin for the LDR and 10k pulldown resistor
int lightThreshold = 2000; // Valor limiar para detecção de escuro

// Pushbutton
const int buttonPin = 27;

void setup() {
  Serial.begin(115200);
  // Configura os pinos dos segmentos como saída
  for (int i = 0; i < 7; i++) {
    pinMode(segPins[i], OUTPUT);
  }
  
  pinMode(buttonPin, INPUT_PULLUP); // Configura o botão com pull-up interno
  analogReadResolution(12); // Configura resolução do ADC para 12 bits (0-4095)
}

void loop() {
  int ldrValue = analogRead(LDRPin);
  
  // Verifica se está escuro
  if (ldrValue < lightThreshold) {
    digitCount++;
    if (digitCount > 9) digitCount = 0; // Reset contador se > 9
    delay(1000); // Delay para evitar múltiplas contagens
  }
  
  // Verifica se o botão foi pressionado
  if (digitalRead(buttonPin) == LOW) {
    digitCount = 0; // Zera o contador
  }
  
  displayDigit(digitCount); // Mostra o número no display
}

// Função para controlar os segmentos do display
void displayDigit(int num) {
  static const uint8_t segments[10] = { // Códigos para os números de 0 a 9
    0b00111111, // 0
    0b00000110, // 1
    0b01011011, // 2
    0b01001111, // 3
    0b01100110, // 4
    0b01101101, // 5
    0b01111101, // 6
    0b00000111, // 7
    0b01111111, // 8
    0b01101111  // 9
  };

  for (int i = 0; i < 7; i++) {
    digitalWrite(segPins[i], (segments[num] >> i) & 1);
  }
}

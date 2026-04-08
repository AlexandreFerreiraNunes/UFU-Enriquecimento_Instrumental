#include <WiFi.h>
#include <WebServer.h>

const char* ssid = "Alexandre";
const char* password = "ugkp7593";

WebServer server(80);

const int ledPin = 2;
const int buzzerPin = 15;
const int displayPins[2] = { 33, 25 };  // G, DP

const byte charactersMap[2][2] = {
  {1, 0 },  // G: Acende o segmento G
  {0, 1 }   // DP: Acende o ponto decimal
};

String getMorseCode(char c) {
  if (c >= 'A' && c <= 'Z') {
    String codes[26] = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---",
                         "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
                         "..-", "...-", ".--", "-..-", "-.--", "--.." };
    return codes[c - 'A'];
  } else if (c >= '0' && c <= '9') {
    String codes[10] = { "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----." };
    return codes[c - '0'];
  }
  return "";
}

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  for (int i = 0; i < 2; i++) {
    pinMode(displayPins[i], OUTPUT);
  }
  server.on("/", HTTP_GET, handleRoot);
  server.on("/convert", HTTP_GET, handleConvert);
  server.begin();
  Serial.println("Server started");
  Serial.println("Endereço IP do servidor: " + WiFi.localIP().toString());
}

void loop() {
  server.handleClient();
}

void displayCharacter(char character) {
  int index;
  if (character == '.') {
    index = 0; // Índice para acender o segmento G
  } else if (character == '-') {
    index = 1; // Índice para acender o ponto decimal (DP)
  } else {
    return; // Se não for '.' ou '-', saia da função
  }

  for (int i = 0; i < 8; i++) {
    digitalWrite(displayPins[i], charactersMap[index][i]);
  }
}

void handleRoot() {
  String ip = WiFi.localIP().toString();
  String message = "<form action=\"/convert\">Digite uma mensagem: <input name=\"text\" type=\"text\"><input type=\"submit\"></form>";
  message += "<p>Endereço IP do servidor: " + ip + "</p>";
  server.send(200, "text/html", message);
}

void handleConvert() {
  String originalMessage = server.arg("text");
  originalMessage.toUpperCase();  // Converte para maiúsculas
  String message = originalMessage;
  String morseMessage = "";

  // Constrói a mensagem Morse sem adicionar espaços após cada letra
  for (char& c : message) {
    if (isalnum(c)) {
      morseMessage += getMorseCode(c);  // Adiciona a letra Morse
    }
  }

  // Adiciona um espaço entre cada letra Morse na mensagem final
  morseMessage.replace(" ", " / ");

  // Itera sobre a mensagem Morse final e executa as ações de exibição e som
  for (char& dotDash : morseMessage) {
    if (dotDash == '.') {
      displayCharacter('.');
    } else if (dotDash == '-') {
      displayCharacter('-');
    } else if (dotDash == ' ') {
      delay(750);  // Pausa entre palavras
    } else if (dotDash == '/') {
      delay(1750); // Pausa entre palavras
    }

    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
    delay(dotDash == '.' ? 250 : 500);
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);
    delay(250);
  }

  server.send(200, "text/html", "<script>window.location='/';</script>"); // Redireciona de volta para a tela inicial

  // Configura o servidor para lidar com a rota "/convert" novamente
  server.on("/convert", HTTP_GET, handleConvert);
}

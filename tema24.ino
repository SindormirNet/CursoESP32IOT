#include <WiFi.h>

void setup_wifi() {
  const char ssid[] = "sindormir.net";
  const char password[] = "clavesecreta";

  Serial.print("Conectando a ");
  Serial.print(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println();
  Serial.print("Conectado a la red: ");
  Serial.print(WiFi.SSID());
  Serial.print(" con la IP: ");
  Serial.println(WiFi.localIP());
}

void setup() {
  Serial.begin(115200);
  setup_wifi();
}

void loop() {
  delay(10);   //Importante para evitar problemas de estabilidad del WiFi
}

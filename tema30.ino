#include <WiFi.h>

void setup_AP() {
  const char ssid[] = "AP";
  const char password[] = "sindormir.net";

  Serial.println("Configurando punto de acceso...");
  WiFi.softAP(ssid,password);
  Serial.print("Dirección IP: ");
  Serial.println(WiFi.softAPIP());
}

void setup () {
  Serial.begin(115200);
  setup_AP();
}

void loop(){
  delay(10);   //Importante para evitar problemas de estabilidad con el WiFi
}

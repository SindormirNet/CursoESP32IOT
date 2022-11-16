#include <WiFi.h>
#include <ArduinoOTA.h>

void setup_wifi() { ¡Contenido de la función omitido! }

void setup() {
  Serial.begin(115200);
  Serial.println("Arrancando");
  setup_wifi();
  ArduinoOTA.begin();    //Habilitamos la programación por OTA
}

void loop() {
  ArduinoOTA.handle();  //Función de control de OTA
  delay(10);  //Importante para evitar problemas de estabilidad con el WiFi
}

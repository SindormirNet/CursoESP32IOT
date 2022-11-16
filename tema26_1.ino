#include <WiFi.h>
#include <WebServer.h>

WebServer server(80);

void setup_wifi() { ¡Contenido de la función omitido! }

void mi_web() {
  const char index_html[] PROGMEM = R"delimitador(
<!DOCTYPE HTML>
<html>
  <head>
    <meta http-equiv='Content-Type' content='text/html; charset=utf-8'>
    <meta name='viewport' content='width=device-width, initial-scale=1'>
    <title>Web en ESP32</title>
  </head>
  <body>
    <h1>Cabecera</h1>
      Este es el cuerpo de la web<br>
  </body>
</html>
)delimitador";

  server.send(200, "text/html", index_html);
}

void setup() {
  Serial.begin(115200);
  setup_wifi();
  server.on("/", mi_web);
  server.begin();
}

void loop() {
  server.handleClient();
  delay(10);   //Importante para evitar problemas de estabilidad del WiFi
}

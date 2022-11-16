#include <WiFi.h>
#include <WebServer.h>

WebServer server(80);

void setup_wifi() { ¡Contenido de la función omitido! }

void mi_web() {
  const char html_ini[] PROGMEM = R"delimitador(
<!DOCTYPE HTML>
<html>
  <head>
    <meta http-equiv='Content-Type' content='text/html; charset=utf-8'>
    <meta name='viewport' content='width=device-width, initial-scale=1'>
    <title>Web en ESP32</title>
  </head>
  <body>
)delimitador";

  const char html_fin[] PROGMEM = R"delimitador(
  </body></html>
)delimitador";

  const char html_links[] PROGMEM = R"delimitador(
Pulsa <a href='/Enciende'>aquí</a> para ENCENDER el LED.<br>
Pulsa <a href='/Apaga'>aquí</a> para APAGAR el LED.<br>
)delimitador";

  server.send(200, "text/html", html_ini + String(html_links) + html_fin);
}

void enciende(){
	digitalWrite(2, HIGH);
	mi_web();
}
void apaga(){
	digitalWrite(2, LOW);
	mi_web();
}
void setup() {
	Serial.begin(115200);
	pinMode(2,OUTPUT);
	setup_wifi();
	server.on("/", mi_web);
	server.on("/Enciende", enciende);
	server.on("/Apaga", apaga);
	server.begin();
}
void loop() {
  server.handleClient();
  delay(10);  //Importante para evitar problemas de estabilidad del WiFi
}

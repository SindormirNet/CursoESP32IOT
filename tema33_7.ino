#include <WiFi.h>
#include <PubSubClient.h>
WiFiClient wifi;
PubSubClient mqtt_client(wifi);

void setup_wifi() { ¡Contenido de la función omitido! }

void mqtt_connect() { ¡Contenido de la función omitido! }

void recepcion_temas(char* topic, byte* payload, unsigned int length) {
  String payload_term;
  for (int i = 0; i < length; i++) {
    // Añadimos todos los caracteres de payload al objeto String payload_term
    payload_term += (char)payload[i]; 
  }

  Serial.print("Mensaje recibido del broker[");
  Serial.print(topic);
  Serial.print("]: ");
  Serial.println(payload_term);

  if (payload_term == "On") {
    digitalWrite(2, HIGH);
    Serial.println("Encendiendo");
  }
  else if (payload_term == "Off"){
    digitalWrite(2, LOW);
    Serial.println("Apagando");
  }
}

void setup() {
  pinMode(2, OUTPUT);
  Serial.begin(115200);
  setup_wifi();
  mqtt_client.setServer("mqtt.sindormir.net", 11883);
  mqtt_client.setCallback(recepcion_temas);
}

void loop() {
  if (!mqtt_client.loop()) { 	//Comprobamos si seguimos conectados y
    mqtt_connect(); 		//en caso contrario, reconectamos
  }
  delay(10); //Importante para evitar problemas de estabilidad con el WiFi
}

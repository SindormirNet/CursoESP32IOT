#include <WiFi.h>
#include <PubSubClient.h>
WiFiClient wifi;
PubSubClient mqtt_client(wifi);
int estado = 0;
void setup_wifi() { ¡Contenido de la función omitido! }

void mqtt_connect() {
  Serial.print("Conectando al servidor MQTT...");
  while (!mqtt_client.connected()) {
    //IMPORTANTE: ¡Cambia JGA por tus iniciales en la siguiente línea!
    if (mqtt_client.connect("ESP32-JGA","sindormir.net","espaciomiscela")) { 
      Serial.println(" conectado!");
      mqtt_client.subscribe("CursoESP32");
    } else {
      Serial.print("#");
      delay(5000);
    }
  }
}

void setup() {
  pinMode(26, INPUT);
  Serial.begin(115200);
  setup_wifi();
  mqtt_client.setServer("mqtt.sindormir.net", 11883);
}
void loop() {
  if (!mqtt_client.loop()) {	//Realizamos mantenimiento del protocolo y si no 
    mqtt_connect();		//estamos conectados, intentamos una reconexión
  }
  else {
    if (digitalRead(26) == HIGH) {
      estado = !estado;
      if (estado == 1) {
        Serial.println("Publicando mensaje: Encender");
        mqtt_client.publish("CursoESP32", "On");
      }
      else {
        Serial.println("Publicando mensaje: Apagar");
        mqtt_client.publish("CursoESP32", "Off");
      }
      delay(500);	//Damos tiempo a soltar el pulsador
    }
  }
  delay(10);   //Importante para evitar problemas de estabilidad con el WiFi
}

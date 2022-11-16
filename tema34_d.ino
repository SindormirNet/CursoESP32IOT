void mqtt_connect() {
  unsigned long num_serie = ESP.getEfuseMac() & 0xFFFFFF;
  String mqtt_cliente_id = "ESP32-" + String(num_serie);
  Serial.print("Conectando al servidor MQTT...");
  while (!mqtt_client.connected()) {
    if (mqtt_client.connect(mqtt_cliente_id.c_str(), "usuario","clave")) { 
      Serial.println(" conectado!");
      mqtt_client.subscribe("CursoESP32");
    } else {
      Serial.print(".");
      delay(5000);
    }
  }
}

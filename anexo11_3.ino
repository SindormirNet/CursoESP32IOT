void setup_wifi() {

  multi.addAP("sindormir.net", "clavesecreta");
  multi.addAP("mi_casa", "clave_de_casa");
  multi.addAP("EvilCorp", "TyrellWellick");

  Serial.print("Conectando a red WiFi");

  while (multi.run() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println();
  Serial.print("Conectado a la red: ");
  Serial.print(WiFi.SSID());
  Serial.print(" con la IP: ");
  Serial.println(WiFi.localIP());
}

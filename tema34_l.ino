while (WiFi.status() != WL_CONNECTED) {
  Serial.println("WiFi desconectado. Intentando reconexión");
  WiFi.disconnect();
  WiFi.reconnect();
  delay(2500);
}

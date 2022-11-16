while (WiFi.status() != WL_CONNECTED) {
  Serial.print("WiFi desconectado. Intentando reconexión");
  WiFi.disconnect();
  WiFi.reconnect();
  delay(2500);
}

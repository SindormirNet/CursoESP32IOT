void setup() {
  Serial.begin(115200);
  Serial.println("Arrancando");
  Serial.flush();
  esp_sleep_enable_timer_wakeup(30000000);
  esp_deep_sleep_start();
}

void loop() {
}

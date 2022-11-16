void setup() {
  Serial.begin(115200);
  Serial.println("Arrancando");
  Serial.flush();
  esp_sleep_enable_ext0_wakeup(GPIO_NUM_4, HIGH); 
  esp_deep_sleep_start();
}

void loop() {
}

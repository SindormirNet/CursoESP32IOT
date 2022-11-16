void callback(){ }

void setup() {
  Serial.begin(115200);
  Serial.println("Arrancando");
  touchAttachInterrupt(T0, callback, 50);  //T0 es el sensor correspondiente
                                           //con el GPIO 4
  esp_sleep_enable_touchpad_wakeup();
  delay(3000);
  esp_deep_sleep_start();
}

void loop() {
}

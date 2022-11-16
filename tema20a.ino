int lectura_efecto_hall;
void setup() {
  Serial.begin(115200);
}

void loop() {
  lectura_efecto_hall = hallRead();
  Serial.println(lectura_efecto_hall);
  delay(30);
}

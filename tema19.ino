void setup() {
  pinMode(25, OUTPUT);
}

void loop() {
  for (int i = 0; i <= 255; i++) {
    dacWrite(25, i);
    delay(1);
  }
}

void setup() {
  pinMode(2, OUTPUT);    // LED
  pinMode(25, INPUT);    // Pulsador
}

void loop() {
  do {
    digitalWrite(2, HIGH);
    delay(100);
    digitalWrite(2, LOW);
    delay(100);
  } while(digitalRead(25) == HIGH);
}

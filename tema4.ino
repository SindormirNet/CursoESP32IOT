void setup() {
  pinMode(2, OUTPUT);		// LED como salida
}
void loop() {
  digitalWrite(2, HIGH);	// Activa el LED
  delay(1000);			// Espera 1000 ms
  digitalWrite(2, LOW);	// Desactiva el LED
  delay(1000);			// Espera 1000 ms
}

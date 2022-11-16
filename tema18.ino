int lectura;

void setup() {
  Serial.begin(115200);
  pinMode(2, OUTPUT);
}

void loop() {
  lectura = touchRead(T0);	// Tomamos el valor del GPIO 4 (T0)
  Serial.println(lectura);

  if (lectura < 70){		// 70 es el umbral de detección de pulsación.
    digitalWrite(2, HIGH);	// Este valor puede no ser siempre 70.
  }
  else{
    digitalWrite(2, LOW);
  }
  delay(20);
}

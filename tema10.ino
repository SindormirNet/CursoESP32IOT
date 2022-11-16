int veces = 0;

void setup() {
  Serial.begin(115200);
  pinMode(2, OUTPUT);	// LED
}

void loop() {
  while(veces < 10) { 
    Serial.println("Esperando...");
    delay(1000);
    veces++;
  }

  while(1) { // Por siempre
    digitalWrite(2, HIGH);
    delay(100);
    digitalWrite(2, LOW);
    delay(100);
  }
}

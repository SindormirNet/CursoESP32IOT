void setup() {
  pinMode(2, OUTPUT);
  pinMode(26, INPUT);
}

void loop(){
  if (digitalRead(26) == HIGH) {	// ¿Está presionado el pulsador?
    digitalWrite(2, HIGH);		// Encendemos el LED 
  } 
  else {
    digitalWrite(2, LOW);		// Apagamos el LED
  }
}

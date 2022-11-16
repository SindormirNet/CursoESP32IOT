int lectura_pulsador; // Variable que almacenará el estado del pulsador

void setup() {
  pinMode(2, OUTPUT);
  pinMode(25, INPUT); // En ESP32 es obligatorio declarar las entradas 
}

void loop(){
  lectura_pulsador = digitalRead(25);

  if (lectura_pulsador == HIGH) {	// ¿Está presionado el pulsador?
    digitalWrite(2, HIGH);		// Encendemos el LED 
  } 
  else {
    digitalWrite(2, LOW);		// Apagamos el LED
  }
}

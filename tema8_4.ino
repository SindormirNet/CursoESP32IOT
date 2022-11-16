int lectura_pulsador;	

void setup() {
  pinMode(25, INPUT);
  Serial.begin(115200);
}

void loop(){
  lectura_pulsador = digitalRead(25);

  if (lectura_pulsador == HIGH) {	// ¿Está presionado el pulsador?
    Serial.println("1");		// Enviamos un 1 por UART
  } 
  else {
    Serial.println("0");		// Enviamos un 0 por UART
  }
}

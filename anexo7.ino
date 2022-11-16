void setup() {
  pinMode(2, OUTPUT);        // LED
  pinMode(26, INPUT_PULLUP); // Pulsador sin resistencia externa    
}

void loop(){
  if (digitalRead(26) == LOW) {	// ¿Está presionado el pulsador?
    digitalWrite(2, HIGH);	      // Encendemos el LED 
  } 
  else {
    digitalWrite(2, LOW);	      // Apagamos el LED
  }
}

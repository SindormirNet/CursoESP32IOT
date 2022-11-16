#define LED 2
#define PULSADOR 26

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(PULSADOR, INPUT);
}

void loop(){
  if (digitalRead(PULSADOR) == HIGH) {  // ¿Está presionado el pulsador?
    digitalWrite(LED, HIGH);	    	    // Encendemos el LED 
  } 
  else {
    digitalWrite(LED, LOW);	    	    // Apagamos el LED
  }
}

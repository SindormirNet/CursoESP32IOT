void setup() {
  pinMode(2, OUTPUT); // LED rojo
  pinMode(5, OUTPUT); // LED verde
  pinMode(25, INPUT); // Pulsador normal
  pinMode(26, INPUT); // Pulsador de emergencia
}

void loop() {
  if (digitalRead(25) == HIGH){
    digitalWrite(2, HIGH);
  }
  else{
    digitalWrite(2, LOW);
  }
	
  if (digitalRead(26) == HIGH){
    while(1){
      digitalWrite(5, HIGH);
      delay(10);
      digitalWrite(5, LOW);
      delay(10);
    }
  }
}

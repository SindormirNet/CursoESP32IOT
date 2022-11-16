void setup() {
  Serial.begin(115200);
}

void loop(){
  Serial.println("Hola");  // Enviamos el literal “Hola” por la UART
  delay(1000);
}

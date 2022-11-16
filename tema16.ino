char dato;
int brillo;

void setup(){
  Serial.begin(115200);    // Indicamos la velocidad del puerto serie
  pinMode(14, OUTPUT);
  ledcSetup(0, 1000, 8);   // LEDC, Canal 0 a 1KHz y 8 bits de resolución
  ledcAttachPin(14, 0);    // Asignación del pin 14 al canal 0
  Serial.print("Introduce números del 0 al 9: ");
}

void loop() {
  if (Serial.available() > 0) { // ¿Ha enviado algún dato el PC?
    dato = Serial.read();  // Guardamos el dato enviado en la variable dato        
    brillo = map(dato, '0', '9', 0, 255); // Escalamos el valor
    ledcWrite(0, brillo);  // Modificamos la intensidad del LED 
    Serial.print("Cambiado brillo a ");  // Escribimos de vuelta al PC
    Serial.println(dato);
  }
}

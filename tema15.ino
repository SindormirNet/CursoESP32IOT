void setup() {
  pinMode(14, OUTPUT);    // LED
  pinMode(2, INPUT);      // Potenciómetro
  pinMode(5, OUTPUT);     // No queremos que moleste el pin 5  
  ledcSetup(0, 1000, 8);  // LEDC, Canal 0 a 1KHz y 8 bits de resolución
  ledcAttachPin(14, 0);   // Asignación del pin 14 al canal 0
}

void loop() {
  int pot0;
  int dimmer_led;
	
  pot0 = analogRead(2);
  dimmer_led = map(pot0, 0, 4095, 0, 255);
  ledcWrite(0, dimmer_led); // Modificamos la luminosidad del canal 0 de LEDC
}

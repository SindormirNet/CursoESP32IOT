int pin;

void setup() {
  for (pin = 16; pin <= 19; pin=pin+1) {
    pinMode(pin, OUTPUT);
  }

}
void loop() {
  for (pin = 16; pin <= 19; pin=pin+1) { 
    digitalWrite(pin, HIGH);
    delay(100);
    digitalWrite(pin, LOW);
  }

  for (pin = 19; pin >= 16; pin=pin-1) {
    digitalWrite(pin, HIGH);
    delay(100);
    digitalWrite(pin, LOW);
  }
}

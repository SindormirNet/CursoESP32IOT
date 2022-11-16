#include "BluetoothSerial.h"

BluetoothSerial BT;

void setup() {
  Serial.begin(115200);
  pinMode(2, OUTPUT);
  Serial.println("Arrancando");
  BT.begin("ESP32 AI2", false);
}

void loop() {
  char dato;
  if (BT.available()) {
    dato = BT.read();
    if (dato == 'A') {
      digitalWrite(2, HIGH);
      Serial.println("Encendiendo");
    }
    if (dato == 'B') {
      digitalWrite(2, LOW);
      Serial.println("Apagando");
    }
  }
}

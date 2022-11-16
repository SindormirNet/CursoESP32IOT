#include "BluetoothSerial.h"

BluetoothSerial BT;

unsigned int contador;

void setup() {
  Serial.begin(115200);
  BT.begin("ESP32 Sindormir", false);
}

void loop() {

  if (BT.available()) {
    if (BT.read() == 'r'){
      contador = 0;
    }
  }

  BT.println(contador);
  contador++;

  delay(500);
}

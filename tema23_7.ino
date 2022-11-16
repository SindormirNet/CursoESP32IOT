#include "BluetoothSerial.h"

BluetoothSerial BT;

void setup() {
  Serial.begin(115200);
  BT.begin("ESP32 Sindormir Maestro", true);

  while (BT.connect("ESP32 Sindormir") == false){}
}

void loop() {
  BT.write('A');
  delay(500);
  BT.write('B');
  delay(500);
}

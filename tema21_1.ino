#include <Preferences.h>

Preferences ajustes;

int serial_no;

void setup() {
  int lectura;
  Serial.begin(115200);

  ajustes.begin("app", false);

  if (ajustes.getUInt("serial") == 0) {
    Serial.println("NO HAY SERIAL PREVIO");
    Serial.print("Introduce número de serie del dispositivo ");

    while (!Serial.available());

    lectura = Serial.parseInt();

    Serial.print("El número de serie introducido es ");
    Serial.println(lectura);

    ajustes.putUInt("serial", lectura);

  }
  else {
    Serial.print("El serial number es ");
    Serial.println(ajustes.getUInt("serial");
  }

  serial_no = ajustes.getUInt("serial");

  ajustes.end();
}

void loop() {
  Serial.print("El número de serie de este dispositivo es: ");
  Serial.println(serial_no);
  delay(10000);
}

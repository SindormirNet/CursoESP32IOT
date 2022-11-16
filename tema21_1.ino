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

    Serial.printf("\nEl número de serie introducido es %d\n", lectura);

    ajustes.putUInt("serial", lectura);

  }
  else {
    Serial.printf("El serial number es %d", ajustes.getUInt("serial"));
  }

  serial_no = ajustes.getUInt("serial");

  ajustes.end();
}

void loop() {
  Serial.printf("El número de serie de este dispositivo es: %d\n", serial_no);
  delay(10000);
}

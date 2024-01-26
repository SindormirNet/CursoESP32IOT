#include <Preferences.h>

Preferences ajustes;
String nombre;

int serial_no;

void setup() {
  Serial.begin(115200);
  ajustes.begin("app", false);
  ajustes.putString("nombre", "sindormir");
  nombre = ajustes.getString("nombre");
  Serial.print("El nombre leído de la NVS es ");
  Serial.print(nombre);
  ajustes.end();
}

void loop() {

}

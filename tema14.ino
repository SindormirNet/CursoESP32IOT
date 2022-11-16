#include <SindormirSevenSegments.h>

Sindormir7segs mi7S;

void setup() {
  pinMode(36, INPUT); // Potenciómetro
  mi7S.attach(18, 19, 23, 5, 13, 12, 14, 27);
}

void loop() {
  int valor_pot0;
  int valor_mapeado;
  
  valor_pot0 = analogRead(36);  // Leemos el valor del potenciómetro
  
  valor_mapeado = map(valor_pot0, 0, 4095, 0, 9); // Convertimos los niveles
 
  mi7S.print(valor_mapeado); // Mostramos el valor en el 7 segmentos
}

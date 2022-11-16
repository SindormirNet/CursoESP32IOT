#include <SindormirSevenSegments.h>

Sindormir7segs sieteseg;

void setup() {
  sieteseg.attach(18, 19, 23, 5, 13, 12, 14, 27);
}

void loop() {
  sieteseg.print(8);
  delay(1000);
  sieteseg.print(1);
  delay(1000);
}

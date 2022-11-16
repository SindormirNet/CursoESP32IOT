#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(8, 25, NEO_GRB + NEO_KHZ800);

void setup() {
  Serial.begin(115200);
  pixels.begin();
}

void loop() {
  pixels.setPixelColor(0, pixels.Color(127, 0, 0)); // Rojo
  pixels.show();
  delay(500);
  pixels.setPixelColor(0, pixels.Color(0, 127, 0)); // Verde
  pixels.show();
  delay(500);
  pixels.setPixelColor(0, pixels.Color(0, 0, 127)); // Azul
  pixels.show();
  delay(500);
}

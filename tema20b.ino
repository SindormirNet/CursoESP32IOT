int miliTesla;
int suelo = 120;

void setup() {
  Serial.begin(115200);
}

void loop() {
  miliTesla = (hallRead() - suelo) * 1.5;
  Serial.println(miliTesla);
  delay(30);
}

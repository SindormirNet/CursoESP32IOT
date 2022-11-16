void mi_web() {
  const char html_ini[] PROGMEM = R"delimitador(
<!DOCTYPE HTML>
<html>
  <head>
    <meta http-equiv='Content-Type' content='text/html; charset=utf-8'>
    <meta name='viewport' content='width=device-width, initial-scale=1'>
    <title>Web en ESP32</title>
  </head>
  <body>
)delimitador";

  const char html_fin[] PROGMEM = R"delimitador(
  </body>
</html>
)delimitador";

  // El siguiente código es una única línea
  String nivel = "<label for 'pin39'>Valor pin 39: </label><meter id='pin39' value='" +   String(analogRead(39)) + "' low='1024' high='3072' max='4095'></meter>";

  server.send(200, "text/html", html_ini + nivel + html_fin);
}

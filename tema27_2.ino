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

  server.send(200,"text/html", html_ini+String(analogRead(39))+html_fin);
}

void mi_web() {
  const char index_html[] PROGMEM = R"delimitador(
<!DOCTYPE HTML>
<html>
  <head>
    <meta http-equiv='Content-Type' content='text/html; charset=utf-8'>
    <meta name='viewport' content='width=device-width, initial-scale=1'>
    <title>Formularios en ESP32</title>
  </head>
  <body>
    <h1>Formulario inicial</h1>
    <form method ='GET' action ='/procesa'>
      <input type='text' name='Modo'>
      <input type='submit' value='Enviar'>
    </form>
  </body>
</html>
)delimitador";

  server.send(200, "text/html", index_html);
}

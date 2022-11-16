void mi_css(){

const char css[] PROGMEM = R"delimitador(
h1 {
  font-size: 80px; /*Tamaño de texto de la cabecera H1*/ 
  color: aqua;
}
body {
  background: silver;
}
)delimitador";
  server.send(200, "text/css", mi_css);
}

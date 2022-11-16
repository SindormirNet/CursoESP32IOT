void verbose_print_reset_reason(RESET_REASON motivo) {
  switch (motivo) {
    case 1 : Serial.println ("Encendido desde cero");break;
    case 3 : Serial.println ("Software reset");break;
    case 4 : Serial.println ("Watchdog reset");break;
    case 5 : Serial.println ("DeepSleep reset");break;
    case 6 : Serial.println ("SLC reset");break;
    case 7 : Serial.println ("Timer Group0 Watch dog reset");break;
    case 8 : Serial.println ("Timer Group1 Watch dog reset");break;
    case 9 : Serial.println ("RTC Watch dog reset");break;
    case 10 : Serial.println ("Instrusion reset");break;
    case 11 : Serial.println ("Time Group reset");break;
    case 12 : Serial.println ("Software reset");break;
    case 13 : Serial.println ("RTC Watch dog Reset");break;
    case 14 : Serial.println ("for APP CPU, reseted by PRO CPU");break;
    case 15 : Serial.println ("Voltaje inestable en VDD");break;
    case 16 : Serial.println ("RTC Watch dog reset");break;
    default : Serial.println ("Desconocido");
   }
}

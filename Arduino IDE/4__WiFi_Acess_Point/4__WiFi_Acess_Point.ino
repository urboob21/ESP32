#include <WiFi.h>

const char *id ="Acess Point Name";
const char *pass="12345678";

void setup() {
  WiFi.softAP(id,pass);

}

void loop() {
  // put your main code here, to run repeatedly:

}

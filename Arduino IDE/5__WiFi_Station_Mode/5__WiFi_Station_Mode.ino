#include <WiFi.h>
//2.4 GHz
const char* id="Hin";
const char* pass="12341234";

void setup() {
  Serial.begin(115200);
  Serial.print("Conecting to Wifi..");
  WiFi.begin(id,pass);
  while(WiFi.status()!=WL_CONNECTED)
    {
      delay(500);
      Serial.printf(".");  
    }
    Serial.print(WiFi.localIP());

}

void loop() {
  // put your main code here, to run repeatedly:

}

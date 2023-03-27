#include <esp32-hal-ledc.h>
#define PIN_IN T4
#define LED_PIN 5
#define CHANEL 0
int touch_value;
int doRoi=4;
bool state=false;
/*
 * Các cảm biến cảm ứng bên trong đó được kết nối với các GPIO sau: 
 * T0 (GPIO 4) T1 (GPIO 0) T2 (GPIO 2) T3 (GPIO 15) T4 (GPIO 13) T5 (GPIO 12) T6 (GPIO 14) T7 (GPIO 27) T8 (GPIO 33) T9 (GPIO 32)
 * 
 */
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN,OUTPUT);
  ledcSetup(0,5000,8);
  ledcAttachPin(LED_PIN,0);
}

void loop() {
  // put your main code here, to run repeatedly:
  touch_value=touchRead(PIN_IN);
  if(touch_value<doRoi)
    state=!state;
  if(state)
    {
      for (int i=0;i<255;i++)
      {
      delay(100);
      ledcWrite(0,i);
      } 
      ledcWrite(0,0); 
    }
    //digitalWrite(LED_PIN,state);
}

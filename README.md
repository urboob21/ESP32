# ESP32
ESP32
 32bit  fSys: 160-240 Mhz
 ROM:448KB  RAM: 520KB  SRAM:520KB
 V:2.2-3.6V
 38 Pin

 Peripherals:
 Wifi 
 Bluetooth
 2 DAC 8bit
 16 ADC 12 bit
 2 I2C
 3 UART
 3 SPI
 CANbus
 PWM  

 /*GPIO:
 *  1. Digital
 *    digitalRead(pin);
 *    digitalWrite(pin,state);
 *  
 *  2. Analog
 *    analogRead(pin);
 *    analogReadResolution(0->12);
 *  3. PWM: <esp32-hal-ledc.h>
 *  
 *  Setup: 
 *    ledcSetup(chanel,freg,res);
 *    ledcAttachPin(pin,chanel);
 *  Start:
 *    ledcWrite(chanel,duty cycle);
 *    
 * 
 */
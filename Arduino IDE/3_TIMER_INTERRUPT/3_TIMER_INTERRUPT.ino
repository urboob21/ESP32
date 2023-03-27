//struct timer config value
hw_timer_t * timer = NULL;

//fution handle interrupt
void IRAM_ATTR onTimer() {
  Serial.printf("interrupt\n");
}
void setup() {
  Serial.begin(115200);
    //-------------------------SETUP INTERRUPT TIMER---------///
  timer = timerBegin(0, 80, true);
  timerAlarmWrite(timer,1000000,true);
  timerAttachInterrupt(timer,&onTimer,true);
  timerAlarmEnable(timer);  
}
  
void loop() {
  // put your main code here, to run repeatedly:
  Serial.printf("do pulling");
  delay(2000);
}

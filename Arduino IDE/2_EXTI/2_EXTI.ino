#define Btn_Pin 0
int pressValue=0;
bool pressState=0;

//funtion interrupt  ...IRAM_ATTR NAME()....
void IRAM_ATTR myISR()
{
  pressValue+=1;
  pressState=true;
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(Btn_Pin,INPUT_PULLUP);
  attachInterrupt(Btn_Pin,myISR,FALLING);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(pressState)
  {
    Serial.printf("Nut nhan da duoc nhat %u\n",pressValue);
    pressState=false;
  }
}

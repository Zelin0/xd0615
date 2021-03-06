#include <MsTimer2.h>   
byte income=0;
int state = 0;
int tick = 0;
int pinInterrupt=2;

void onTimer()
{
  Serial.print("timer ");
  Serial.println(tick++);
  if(tick==10)
  {
    tick = 0;
  }
  state = ~state;
  digitalWrite(13,state);
  
  income = tick;
  income=income-'0';
  digitalWrite(2,income&0x1);
  digitalWrite(3,(income>>1)&0x1);
  digitalWrite(4,(income>>2)&0x1);
  digitalWrite(5,(income>>3)&0x1);
  delay(10);

}

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
  
  MsTimer2::set(1000, onTimer); //设置中断，每1000ms进入一次中断服务程序 onTimer()
  MsTimer2::start(); //开始计时
}

void loop()
{
}
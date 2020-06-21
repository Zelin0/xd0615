#define IN1 2
#define IN2 3
#define IN3 4
#define IN4 5
#define S1 8
#define S2 9
#define S3 10
#define S4 11
#define LT 6
#define BT 7
void setup()
{
  Serial.begin(9600);
  pinMode(IN1, OUTPUT);//输入1
  pinMode(IN2, OUTPUT);//输入2
  pinMode(IN3, OUTPUT);//输入3
  pinMode(IN4, OUTPUT);//输入4
  pinMode(S1, OUTPUT);//片选1
  pinMode(S2, OUTPUT);//片选2
  pinMode(S3, OUTPUT);//片选3
  pinMode(S4, OUTPUT);//片选4
  pinMode(LT,OUTPUT);//测试
  pinMode(BT,OUTPUT);//消隐
  digitalWrite(LT,HIGH);
  digitalWrite(BT,HIGH);
  digitalWrite(S1,HIGH);
  digitalWrite(S2,HIGH);
  digitalWrite(S3,HIGH);
  digitalWrite(S4,HIGH);

}

byte income=0,income1=0,income2=0,income3=0;
void loop()
{
   if(Serial.available()>0)
  {
  	income=Serial.read();
    //Serial.println(income);
    income=income-'0';
    //Serial.println(income);
    digitalWrite(S1,LOW);
    digitalWrite(2,income&0x1);
    digitalWrite(3,(income>>1)&0x1);
    digitalWrite(4,(income>>2)&0x1);
    digitalWrite(5,(income>>3)&0x1);
    digitalWrite(S1,HIGH);
  	delay(10);
     
     
     income1=Serial.read();
    //Serial.println(income);
    income1=income1-'0';
    //Serial.println(income);
    digitalWrite(S2,LOW);
    digitalWrite(2,income1&0x1);
    digitalWrite(3,(income1>>1)&0x1);
    digitalWrite(4,(income1>>2)&0x1);
    digitalWrite(5,(income1>>3)&0x1);
    digitalWrite(S2,HIGH);
  	delay(10);
     
     income2=Serial.read();
    //Serial.println(income);
    income2=income2-'0';
    //Serial.println(income);
    digitalWrite(S3,LOW);
    digitalWrite(2,income2&0x1);
    digitalWrite(3,(income2>>1)&0x1);
    digitalWrite(4,(income2>>2)&0x1);
    digitalWrite(5,(income2>>3)&0x1);
    digitalWrite(S3,HIGH);
  	delay(10);
     
     income3=Serial.read();
    //Serial.println(income);
    income3=income3-'0';
    //Serial.println(income);
    digitalWrite(S4,LOW);
    digitalWrite(2,income3&0x1);
    digitalWrite(3,(income3>>1)&0x1);
    digitalWrite(4,(income3>>2)&0x1);
    digitalWrite(5,(income3>>3)&0x1);
    digitalWrite(S4,HIGH);
  	delay(10);
  }
}
 
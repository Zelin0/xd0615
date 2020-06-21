#include <LiquidCrystal.h>

//使用接口管脚的编号初始化库
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  //设置LCD的列数和行数：
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  //向LCD打印信息
  lcd.print("I am ready!!");
  delay(1000);
  lcd.setCursor(0, 0);
  lcd.print("Please input."); 
  Serial.begin(9600);
  
}

void loop() {
  if(Serial.available()>0)
  {
  lcd.setCursor(0, 1);
  lcd.print("                ");
  lcd.setCursor(0, 1);
  lcd.print(Serial.readString());
  }
}
 
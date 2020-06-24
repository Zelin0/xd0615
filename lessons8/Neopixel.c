#include <Adafruit_NeoPixel.h>

#define PIN 2	 //  输入引脚Neopixel连接到2

#define NUMPIXELS      12 // 条中neopixels的数量为12

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 100; // 定时延迟（毫秒）

int redColor = 0;
int greenColor = 0;
int blueColor = 0;

void setup() {
  // 初始化neopix库.
  pixels.begin();
}

void loop() {
  setColor();

  for (int i=0; i < NUMPIXELS; i++) {
    // 像素。颜色采用RGB值，从0,0,0到255，255，255
    pixels.setPixelColor(i, pixels.Color(redColor, greenColor, blueColor));

    // 将更新的像素颜色发送到硬件.
    pixels.show();

    // 一段时间的延迟（毫秒）.
    delay(delayval);
  }
}

// setColor()
// 选取要为RGB设置的随机值
void setColor(){
  redColor = random(0, 255);
  greenColor = random(0,255);
  blueColor = random(0, 255);
}
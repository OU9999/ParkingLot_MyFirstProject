//우노전용임..

#include<LiquidCrystal_I2C_Hangul.h>
#include<Wire.h>


LiquidCrystal_I2C_Hangul lcd(0x3F,16,2); //LCD 클래스 초기화

void setup() {
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  lcd.setDelayTime(1000);
  lcd.printHangul(L"한글출력입니다",0,7); //lcd.printHangul(한글 문장, 시작 포인트, 문장 길이);

}

void loop() {
}

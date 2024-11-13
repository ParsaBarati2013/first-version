#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F, 16, 2);

void setup() {
  lcd.init();
  lcd.clear();
  lcd.backlight();
  lcd.setCursor(1, 0);
  lcd.print("Hello world!");
}

void loop() {
}

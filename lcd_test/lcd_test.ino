#include <LiquidCrystal.h>
int LCDcol = 16;
int LCDrow = 2;

LiquidCrystal lcd (2, 3, 4, 5, 6, 7);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(LCDcol, LCDrow);
  lcd.setCursor(0, 0);
  lcd.print("hello");
}

void loop() {
}

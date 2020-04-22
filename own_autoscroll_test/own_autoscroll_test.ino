#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
String message = "Gulselsh is really cool ";

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  lcd.setCursor(16, 0);
  lcd.autoscroll();
  for (int i = 0; i < message.length(); i++) {
    lcd.print(message[i]);
    delay(200);
  }
}

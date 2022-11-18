#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {

  // set up the LCD's number of columns and rows:

  lcd.begin(16, 2);

delay(500);
}


void loop() {

  // set the cursor to column 0, line 1

  // (note: line 1 is the second row, since counting begins with 0):
  lcd.print("Set Temperature");
  lcd.setCursor(0, 1);
  lcd.print(millis() / 1000);
  delay(500);
  lcd.clear();
  delay(500);
 /** lcd.setCursor(0, 2);
  lcd.print("\nActual Temperature\n");
  lcd.setCursor(0, 2);
  lcd.print(millis() / 1000 );
  lcd.setCursor(0, 1);
  lcd.print(millis() / 1000);

  lcd.print("Actual Temperature");
  lcd.print(millis() / 1000);
  lcd.setCursor(0, 3);

  // print the number of seconds since reset:

  lcd.print(millis() / 1000);
**/
}

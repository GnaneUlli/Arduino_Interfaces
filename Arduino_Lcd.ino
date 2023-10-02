#include <LiquidCrystal.h>
unsigned int rs=12,en=11,d0=7,d1=6,d2=5,d3=4;
LiquidCrystal lcd(rs,en,d0,d1,d2,d3);
void setup()
{
  lcd.begin(16, 2);
  lcd.setCursor(4, 0);
  lcd.print("GNANESWARAO");
  lcd.setCursor(4, 1);
  lcd.print("OARAWSENANG");
}

void loop() 
{
}

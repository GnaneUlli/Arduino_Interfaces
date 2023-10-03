#include<LiquidCrystal.h>
const unsigned char rs=12,en=11,d0=7,d1=3,d2=5,d3=4,pwm_pin=6;
unsigned int sensor_value_ch1,sensor_value_ch2,i;
LiquidCrystal lcd(rs,en,d0,d1,d2,d3);
void setup()
{
  lcd.begin(16,2);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(pwm_pin,OUTPUT);

}
void loop()
{
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("CH1=");
  sensor_value_ch1=analogRead(A0);
  lcd.setCursor(5,0);
  lcd.print(sensor_value_ch1);
  lcd.setCursor(0,1);
  lcd.print("CH2=");
  sensor_value_ch2=analogRead(A1);
  i=map(sensor_value_ch2,0,1023,0,338);
  int pwm_value=map(sensor_value_ch2,0,1023,0,255);
  analogWrite(pwm_pin,pwm_value);
  lcd.setCursor(5,1);
  lcd.print(i);
  delay(100);
}

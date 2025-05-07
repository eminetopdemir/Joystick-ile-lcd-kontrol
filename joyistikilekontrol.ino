#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
int x=A0;
int y=A1;
int xeksen;
int yeksen;
int sutun=8,satir=0;
int ysutun=8,ysatir=1;
void setup() {
lcd.begin(16,2);
Serial.begin(9600);
}

void loop() {
xeksen=analogRead(x);
Serial.println(xeksen);
yeksen=analogRead(y);
delay(500);
if(xeksen<400)
{
  lcd.clear();
  lcd.setCursor(sutun,satir);
    sutun--;
  lcd.print("*");
}
if(xeksen>600)
{
  lcd.clear();
  lcd.setCursor(sutun,satir);
    sutun++;
  lcd.print("*");
  
}
if(sutun<0)
 {
  lcd.setCursor(0,satir);
  lcd.print(" YANDINIZZZ ");
  delay(150);
  lcd.print(" ");
 }
 if(sutun>15)
 {
  lcd.setCursor(0,satir);
   lcd.print(" YANDINIZZZ ");
 delay(150);
  lcd.print(" ");
 }
}

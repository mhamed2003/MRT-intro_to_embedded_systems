#include <LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);
int pin =A0;
int num=0;
void setup() {
lcd.begin(16,2);

}

void loop() {
num=analogRead(pin);
float mv=(num/1024.0)*5000;
float c=mv/10;
lcd.clear();
lcd.print(c);
lcd.print(" c");
delay(1000);

}

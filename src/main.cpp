#include <mbed.h>
#include <C12832.h>

// Using Arduino pin notation
C12832 lcd(D11, D13, D12, D7, D10);

int main()
{
    int j=0;
    lcd.cls();
    lcd.locate(0,0);
    lcd.printf("Unrecognised system");

    lcd.locate(0,10);
    lcd.printf("Self destructing in:");
    int i = 10;
    while(i >= 0)
    {
      lcd.locate(90,10);
        lcd.printf("%4d",i);
        i--;
        wait(1.0);
    }

    lcd.locate(0,20);
    lcd.printf("***BOOM***");
}

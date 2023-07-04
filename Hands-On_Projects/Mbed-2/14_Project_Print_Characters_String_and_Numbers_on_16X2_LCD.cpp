/*
 * Author: DIBYENDU BARMAN
 * Date: 04-July-2023
 * Project Description: Print Characters, String and Numbers on 16X2 LCD
 * TextLCD Library: https://os.mbed.com/users/simon/code/TextLCD/
 */

#include "mbed.h"
#include "TextLCD.h"

TextLCD lcd(D13, D12, D11, D10, D9, D8, TextLCD::LCD16x2);  // Define TextLCD object for 16x2 LCD

int main()
{
    lcd.cls();             // Clear LCD screen
    lcd.locate(1, 0);      // Set cursor position to column 1, row 0
    lcd.putc('A');         // Print character 'A'
    lcd.putc('R');         // Print character 'R'
    lcd.putc('M');         // Print character 'M'
    lcd.printf(" CORTEX M4");  // Print string "CORTEX M4"
    lcd.locate(6, 1);      // Set cursor position to column 6, row 1
    lcd.printf("STM32");   // Print string "STM32"
    int i = 0;
    while (true)
    {
        lcd.locate(13, 1);    // Set cursor position to column 13, row 1
        lcd.printf("%d", i);  // Print value of i
        wait(1);              // Delay for 1 second
        i++;
    }
}

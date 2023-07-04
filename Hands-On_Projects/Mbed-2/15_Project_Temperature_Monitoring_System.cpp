/*
 * Author: DIBYENDU BARMAN
 * Date: 04-July-2023
 * Project Description: Temperature Monitoring System using 16X2 Liquid Crystal Display and LM35
 * TextLCD Library: https://os.mbed.com/users/simon/code/TextLCD/
 */

#include "mbed.h"
#include "TextLCD.h"

AnalogIn LM35(A0);           // Analog input for LM35 temperature sensor
DigitalOut RedLed(D4);      // Red LED output pin
DigitalOut GreenLed(D2);    // Green LED output pin
TextLCD lcd(D13, D12, D11, D10, D9, D8, TextLCD::LCD16x2); // Define TextLCD object for 16x2 LCD

int main() {
    while (true) {
        float LM35_val = LM35.read();                    // Read LM35 sensor value
        float LM35_mVolts = LM35_val * 3300;              // Convert sensor value to millivolts
        float TempC = LM35_mVolts / 10;                   // Calculate temperature in degrees Celsius

        lcd.locate(0, 0);                                // Set cursor position to column 0, row 0
        lcd.printf("Temp: %.2f", TempC);                 // Print temperature value with 2 decimal places
        lcd.putc(223);                                   // Print degree symbol
        lcd.putc('C');                                   // Print "C" for Celsius

        if (TempC >= 25) {
            RedLed = 1;                                  // Turn on red LED if temperature is greater than or equal to 25 degrees Celsius
            GreenLed = 0;                                // Turn off green LED
        } else {
            RedLed = 0;                                  // Turn off red LED
            GreenLed = 1;                                // Turn on green LED if temperature is less than 26 degrees Celsius
        }

        wait(2);                                          // Delay for 2 seconds
        lcd.cls();                                        // Clear LCD screen
    }
}

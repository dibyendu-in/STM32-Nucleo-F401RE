/*
 * Author: DIBYENDU BARMAN
 * Date: 02-July-2023
 * Project Description: Buzzer Beep Beep @D2 using wait delay function
*/

#include "mbed.h"

DigitalOut buz(D2);  // Define DigitalOut object for the D2 pin (D2)

int main()
{   
    while (true) 
    {
        buz.write(1);  // Set the buzzer pin high, turning on the buzzer
        wait_ms(300);  // Delay for 300 milliseconds

        buz.write(0);  // Set the buzzer pin low, turning off the buzzer
        wait_ms(300);  // Delay for 300 milliseconds
    }
}

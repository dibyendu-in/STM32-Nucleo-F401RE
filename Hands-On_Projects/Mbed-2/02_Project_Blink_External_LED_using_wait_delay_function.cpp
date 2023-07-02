/*
 * Author: DIBYENDU BARMAN
 * Date: 02-July-2023
 * Project Description: Blink External LED @D2 using wait delay function
*/

#include "mbed.h"

DigitalOut led(D2);  // Define DigitalOut object for the D2 pin (D13)

int main()
{   
    while (true) 
    {
        led.write(1);  // Set the LED high, turning on the LED
        wait_ms(1000);  // Delay for 1 second (1000 milliseconds)

        led.write(0);  // Set the LED low, turning off the LED
        wait_ms(1000);  // Delay for 1 second (1000 milliseconds)
    }
}

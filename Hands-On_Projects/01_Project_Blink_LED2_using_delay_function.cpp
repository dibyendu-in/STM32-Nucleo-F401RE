/*
 * Author: DIBYENDU BARMAN
 * Date: 26-June-2023
 * Project Description: Blink LED2 using delay function
 */

#include "mbed.h"

DigitalOut ledPin(D13);  // Define DigitalOut object for the LED pin (D13)

int main()
{   
    while (true) 
    {
        ledPin.write(1);  // Set the LED pin high, turning on the LED
        HAL_Delay(1000);  // Delay for 1 second (1000 milliseconds)

        ledPin.write(0);  // Set the LED pin low, turning off the LED
        HAL_Delay(10000);  // Delay for 10 seconds (10000 milliseconds)
    }
}

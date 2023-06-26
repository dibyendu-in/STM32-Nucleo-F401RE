/*
 * Author: DIBYENDU BARMAN
 * Date: 26-June-2023
 * Project Description: Onboard LED On and Off by using the User Button
 */

#include "mbed.h"

DigitalOut ledPin(D13);  // Define DigitalOut object for the LED pin (D13)
DigitalIn button(PC_13);  // Define DigitalIn object for the user button pin (PC_13)

int main()
{   
    while (true) 
    {
        if (button)  // Check if the button is pressed
            ledPin = 0;  // Set the LED pin low, turning off the LED
        else
            ledPin = 1;  // Set the LED pin high, turning on the LED
    }
}

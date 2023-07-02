/*
 * Author: DIBYENDU BARMAN
 * Date: 02-July-2023
 * Project Description: Onboard LED On and Off by using the User Button
*/

#include "mbed.h"

DigitalOut ledPin(LED2);  // Define DigitalOut object for the LED2 pin (D13)
DigitalIn button(USER_BUTTON);  // Define DigitalIn object for the USER_BUTTON pin (PC_13)

int main()
{   
    while (true) 
    {
        if (button)  // Check the button is pressed or not
            ledPin = 0;  // Set the LED pin low, turning off the LED
        else
            ledPin = 1;  // Set the LED pin high, turning on the LED
    }
}

/*
 * Author: DIBYENDU BARMAN
 * Date: 26-June-2023
 * Project Description: Onboard LED On and Off by using External Button
 */

#include "mbed.h"

DigitalOut ledPin(D13);  // Define DigitalOut object for the onboard LED pin (D13)
DigitalIn button(D11);  // Define DigitalIn object for the external button pin (D11)

int main()
{  
    button.mode(PullUp);  // Set the button pin as PullUp mode to enable internal pull-up resistor
    while (true) 
    {
        if (button)  // Check if the button is pressed
            ledPin = 0;  // Set the LED pin low, turning off the LED
        else
            ledPin = 1;  // Set the LED pin high, turning on the LED
    }
}

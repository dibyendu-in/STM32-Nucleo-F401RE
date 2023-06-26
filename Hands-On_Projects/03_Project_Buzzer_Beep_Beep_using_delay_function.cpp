/*
 * Author: DIBYENDU BARMAN
 * Date: 26-June-2023
 * Project Description: Buzzer Beep Beep @D2 using delay function
 */

#include "mbed.h"

DigitalOut buzPin(PA_10);  // Define DigitalOut object for the buzzer pin (PA_10) or D2
//DigitalOut buzPin(D2);

int main()
{   
    while (true) 
    {
        buzPin.write(1);  // Set the buzzer pin high, turning on the buzzer
        HAL_Delay(300);  // Delay for 300 milliseconds

        buzPin.write(0);  // Set the buzzer pin low, turning off the buzzer
        HAL_Delay(300);  // Delay for 300 milliseconds
    }
}

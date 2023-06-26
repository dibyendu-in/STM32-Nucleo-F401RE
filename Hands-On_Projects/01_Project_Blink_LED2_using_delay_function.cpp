/*
 * Author: DIBYENDU BARMAN
 * Date: 26-June-2023
 * Project Description: Blink LED2 using delay function
 */

#include "mbed.h"

DigitalOut ledPin(D13);
int main()
{   
    while (true) 
    {
        ledPin.write(1);
        HAL_Delay(1000);
        ledPin.write(0);
        HAL_Delay(10000);
    }
}

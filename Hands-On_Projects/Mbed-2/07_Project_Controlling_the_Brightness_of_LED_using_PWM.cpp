/*
 * Author: DIBYENDU BARMAN
 * Date: 03-July-2023
 * Project Description: Controlling the Brightness of LED using PWM
*/

#include "mbed.h"
                                          
PwmOut PWM1(D9);  // Define PwmOut object for the PWM pin (D9)

int main()
{
    while (true)
    {        
        double i = 0;
        while (i < 1)
        {
            PWM1.period(0.01);  // Set the PWM period to 0.01 seconds (100 Hz)
            PWM1.write(i);  // Set the PWM duty cycle
            i = i + 0.01;
            wait_ms(50);  // Delay for 50 milliseconds
        }
        while (i > 0)
        {
            PWM1.period(0.01);  // Set the PWM period to 0.01 seconds (100 Hz)
            PWM1.write(i);  // Set the PWM duty cycle
            i = i - 0.01;
            wait_ms(50);  // Delay for 50 milliseconds
        }
    }
}

/*
 * Author: DIBYENDU BARMAN
 * Date: 26-June-2023
 * Project Description: Producing Ambulance Sound using PWM by varying PWM Frequency
 */

#include "mbed.h"

PwmOut PWM1(D3);  // Define PwmOut object for the PWM pin (D3)

int main()
{
    while (true)
    {
        // First tone: 1kHz frequency
        PWM1.period_us(2197);  // Set the PWM period to 2197 microseconds (455 Hz)
        PWM1.pulsewidth_us(1099);  // Set the pulse width to 1099 microseconds (50% duty cycle)
        HAL_Delay(500);  // Delay for 500 milliseconds

        // Second tone: 333 Hz frequency
        PWM1.period_us(3003);  // Set the PWM period to 3003 microseconds (333 Hz)
        PWM1.pulsewidth_us(1501);  // Set the pulse width to 1501 microseconds (50% duty cycle)
        HAL_Delay(500);  // Delay for 500 milliseconds
    }
}

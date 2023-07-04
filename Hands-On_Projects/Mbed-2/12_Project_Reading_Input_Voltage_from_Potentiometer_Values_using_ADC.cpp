/*
 * Author: DIBYENDU BARMAN
 * Date: 04-July-2023
 * Project Description: Reading Input Voltage from Potentiometer Values using ADC
 */

#include "mbed.h"

Serial pc(USBTX, USBRX);   // Serial object for PC communication
AnalogIn POT(A0);          // Analog input for potentiometer

int main()
{
    while (true) 
    {
        float ADC_val = POT.read();                     // Read potentiometer value
        printf("ADC val: %f \n", ADC_val);              // Print potentiometer value
        // Equivalent Voltage = ADC Voltage * Reference Voltage
        float ADC_volts = ADC_val * 3.3;                // Convert potentiometer value to voltage
        printf("ADC voltage: %f \n", ADC_volts);        // Print potentiometer voltage
        wait_ms(500);                                   // Delay for 500 milliseconds
    }
}

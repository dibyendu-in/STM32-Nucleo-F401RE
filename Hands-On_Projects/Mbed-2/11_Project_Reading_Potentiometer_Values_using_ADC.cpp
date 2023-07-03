/*
 * Author: DIBYENDU BARMAN
 * Date: 03-July-2023
 * Project Description: Reading Potentiometer Values using ADC
 */

#include "mbed.h"

Serial pc(USBTX, USBRX);   // Serial object for PC communication
AnalogIn POT(A0);          // Analog input for potentiometer

int main()
{
    while (true) 
    {
        float ADC_val = POT.read();           // Read potentiometer value
        printf("ADC val: %f \n", ADC_val);    // Print potentiometer value
        wait_ms(500);                         // Delay for 500 milliseconds
    }
}

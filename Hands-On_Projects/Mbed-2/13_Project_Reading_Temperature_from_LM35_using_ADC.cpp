/*
 * Author: DIBYENDU BARMAN
 * Date: 04-July-2023
 * Project Description: Reading Temperature from Temperature Sensor LM35 using ADC
 */

#include "mbed.h"

Serial pc(USBTX, USBRX);        // Serial object for PC communication
AnalogIn LM35(A0);              // Analog input for LM35 temperature sensor

int main()
{
    while (true) 
    {
        float LM35_val = LM35.read();                    // Read LM35 value
        printf("LM35 val: %f \n", LM35_val);              // Print LM35 value

        float LM35_mVolts = LM35_val * 3300;              // Convert LM35 value to millivolts
        printf("LM35 voltage: %f \n", LM35_mVolts);        // Print LM35 voltage

        float TempC = LM35_mVolts / 10;                   // Convert millivolts to temperature in Celsius
        printf("Temperature: %f C\n", TempC);              // Print temperature in Celsius

        wait_ms(2000);                                   // Delay for 2000 milliseconds (2 seconds)
    }
}  

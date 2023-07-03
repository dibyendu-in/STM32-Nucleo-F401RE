/*
 * Author: DIBYENDU BARMAN
 * Date: 03-July-2023
 * Project Description: Hyper Terminal Tool - CoolTerm
 */

#include "mbed.h"

Serial PC(USBTX, USBRX);  // Serial object for PC communication

int main()
{
    int i = 0;

    while (1) {
        printf("Printing on PC %d\n", i++);  // Print message with the value of i
        wait_ms(1000);  // Delay for 1000 milliseconds (1 second)
    }
}

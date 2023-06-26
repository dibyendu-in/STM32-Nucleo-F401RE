/*
 * Author: DIBYENDU BARMAN
 * Date: 26-June-2023
 * Project Description: Interrupt Handling by using User Button
 */

#include "mbed.h"

InterruptIn button(PC_13);  // Define InterruptIn object for the user button pin (PC_13)
DigitalOut flash(D13);  // Define DigitalOut object for the LED pin (D13)
DigitalOut Red_led(D8);  // Define DigitalOut object for the LED pin (D8)

void flip() {
    Red_led = !Red_led;  // Toggle the state of the LED pin (D8)
}

int main() {
    button.fall(&flip);  // Attach the address of the flip function to the falling edge of the button
    while (1) {  // Main program loop
        flash = !flash;  // Toggle the state of the LED pin (D13)
        HAL_Delay(50);  // Delay for 50 milliseconds
    }
}

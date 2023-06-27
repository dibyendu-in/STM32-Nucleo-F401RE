/*
 * Author: DIBYENDU BARMAN
 * Date: 27-June-2023
 * Project Description: Controlling the Speed and Direction of DC-Motor using PWM
 */

#include "mbed.h"

PwmOut PWM_M(D9);
PwmOut PWM_L(D3);
DigitalOut Ma(D10);
DigitalOut Mb(D11);
DigitalOut flash(D13);
InterruptIn B_Dir(PC_13);
InterruptIn B_Speed(D12, PullUp);

double i = 0;

void Mot_Dir_Flip() {
    Ma = !Ma;   // Toggle the direction control pin Ma
    Mb = !Mb;   // Toggle the direction control pin Mb
}

void Mot_Speed() {
    i = i + 0.1;          // Increment the speed value
    PWM_L.write(i);       // Set the speed of PWM_L
    PWM_M.write(i);       // Set the speed of PWM_M
    if (i >= 1) {
        i = 0;           // Reset the speed value if it reaches maximum
    }
}

int main() {
    PWM_M.period_ms(1);    // Set the period of PWM_M to 1ms
    PWM_L.period_ms(1);    // Set the period of PWM_L to 1ms
    B_Dir.fall(&Mot_Dir_Flip);    // Attach the Mot_Dir_Flip function to the falling edge of B_Dir
    B_Speed.fall(&Mot_Speed);     // Attach the Mot_Speed function to the falling edge of B_Speed
    Ma = 0;     // Set initial direction to forward
    Mb = 1;     // Set initial direction to forward

    while (true) {
        flash = !flash;    // Toggle the flash LED pin
        HAL_Delay(25);     // Delay for 25ms
    }
}

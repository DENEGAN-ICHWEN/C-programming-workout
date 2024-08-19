/*
Finds the transfer velocitry of information based on
the bus width, clock frecuency and bus cycle.
Date: 19/03/2023
Author: Clay Felipe, Ana Maria and Jhoan Sebastian.
*/

#include <stdio.h>

int main(void)
{
    unsigned int bus_width, clock_frecuency, bus_cycle;
    float transfer_velocity = 0;

    printf("\nThis program finds the transfer velocity of information in bytes. Please enter the bus width (Bits),\
clock frecuency (Hz) and bus cycle (Secs) (Separate each value with a space).\n");
    scanf("%d %d %d", &bus_width, &clock_frecuency, &bus_cycle);

    transfer_velocity = (bus_width * clock_frecuency) / (bus_cycle * 8 * 1.0); // The 8 converts bits to bytes, the 1.0 assures a floating point division.

    printf("The transfer velocity of information is: %f bytes per second", transfer_velocity);

    return 0;
}
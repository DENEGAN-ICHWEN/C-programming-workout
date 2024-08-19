/*
In a certain city, the fare for a taxi consists of a base fare of 4000 cop, plus 82 pesos for every 100 meters
traveled. Write a function that takes the distance traveled in kilometers (float) as a parameter and
returns the total fare for the trip (int).

Don't forget to round the return (int) value to the nearest integer.
Author: Clay Felipe Charry Pinzón
Date: 21/11/2022
*/

#include <stdio.h>
#define km_rate 82

int main(void) 
{
    float km_traveled, km_meters;
    int base_rate = 4000, total_rate;
    
    printf("Enter the amount of kilometer trasveled: ");
    scanf("%f", &km_traveled);

    km_meters = (km_traveled * 1000) / 100.0; // Times to collect the km_rate based on the distance of the travel.
    total_rate = base_rate + (km_rate * km_meters); // The total of the travel

    printf("The rate of the travle is: %d", total_rate);

    return 0;
}

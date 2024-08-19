/*
In many countries, a person's height is measured in feet and inches. Create a function that takes
 as a parameter the number of feet (int) and the number of inches (int) that make up a person's height,
and returns the height in meters (float).
Author: Clay Felipe Charry Pinzón
Date: 21/11/2022
*/

#include <stdio.h>
#define feet_inches  12 // Inches in a feet.
#define inches_cm  2.54 // cm in a inche.

int main(void)
{
    int feet, inches, feet_to_inches;
    float meters, inches_to_cm;

    printf("Enter your heigth in feet and inches: ");
    scanf("%d %d", &feet, &inches);

    feet_to_inches = feet_inches * feet;
    inches_to_cm = inches_cm * (inches + feet_to_inches);
    meters = inches_to_cm * 100;

    printf("Your heigth in meters is: %f", meters);

    return 0;
}
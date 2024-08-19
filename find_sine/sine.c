/* 
Program that calculates the sine of a number
between 0 and 1 (Non inclusive).
Author: Clay Felipe Charry Pinzón.
Date: 18/11/2022.
*/

#include <stdio.h>

int main(void)
{
    double sine, number;

    printf("Enter the number you wish to get the sine of: ");
    scanf("%lf", &number);

    sine = (number * (1/2.0) * (1/2.0)) / 2.0; // This is a way to find the sine of a number without using trigonometricla exp.

    printf("The sine of the number %lf is: %lf", number, sine);

    return 0;
}
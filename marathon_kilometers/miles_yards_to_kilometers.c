/*
Converts a marathon distance in miles and yards to kilometers.
Date: 17/07/2022
Author: Clay Felipe Charry Pinzón
*/

#include <stdio.h>
#define kilometers_in_miles 1.609

int main()
{
    int miles = 0, yards = 0;
    double kilometers;

    printf("Enter the quantity of miles and yards you want to convert to kilometers: ");
    scanf("%d %d", &miles, &yards);

    kilometers = kilometers_in_miles * (miles + (yards / 1760.0));

    printf("\n A marathon with %d miles and %d yards is %lf kilometers.\n\n", miles, yards, kilometers);

    return 0;
}
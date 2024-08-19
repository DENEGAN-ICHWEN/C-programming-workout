/*
Find circle area
Date: 17/07/2022
Author: Clay Felipe Charry Pinzón
*/

#include <stdio.h>

#define pi 3.141592653589793

int main()
{
    double area = 0, radius = 0;
    printf("Enter the radius: ");
    scanf("%lf", &radius);
    area = pi * radius * radius;
    printf("Radius of %lf meters; area is %lf sq. meters\n", radius, area);
    return 0;
}
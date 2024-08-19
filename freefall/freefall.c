/*
Create a function that determines the speed, in m/s , that an object travels when it hits the ground, in free fall.
 The function receives the height (float) at which the object was when it was released, in meters.

Since it is free fall, the initial velocity of the object is 0 m/s. Assume that the acceleration due to gravity is 9.8 m/s^2.
Author: Clay Felipe Charry Pinzón.
Date: 21/11/2022
*/

#include <stdio.h>
#include <math.h>
#define gravity 9.8

int main(void)
{
    float final_speed = 0, heigth;

    printf("Enter the heigth the object fell from: ");
    scanf("%f", &heigth);

    final_speed = sqrt(2 * gravity * heigth);

    printf("The final speed of the object is: %f", final_speed);

    return 0;
}
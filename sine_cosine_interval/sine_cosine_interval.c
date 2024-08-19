/*
Author: Clay Charry
Date: 05/05/2023
Program that, in an interval from 0 to 1, prints the sine and cosine of
all values in range.
*/

#include<stdio.h>
#include<math.h>

int main(void)
{
    int i;
    float sine, cosine, interval;

    for (i = 0; i < 11; i++)
    {
        interval = i / 10.0;
        sine = sin(interval);
        cosine = cos(interval);
        
        printf("The table of results is:\n");
        printf("sin(%f) = %f\tcos(%f) = %f\n", interval, sine, interval, cosine);
    }

    return 0;
}
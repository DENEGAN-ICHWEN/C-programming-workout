/*
Author: Clay Felipe Charry P.
Date: 21/04/23
Program that show the function of an oddball operator.
*/
#include <stdio.h>

int main (void)
{
    short a = 0, b = 1, c;

    c = (a || b)? b:a; // If true, c takes the value of b, otherwise it takes a.

    printf("The result was: %d", c);

    return 0;
}
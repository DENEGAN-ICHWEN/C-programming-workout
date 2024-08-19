/*
Author: Clay F. Charry P.
Date: 21/04/23
Program that shows the function of the comma operator in some
interesting cases.
*/

#include <stdio.h>

int main(void)
{
    int var, num;

    num = (var = 15, var + 35);

    printf("El resultado es %d", num);
    
    return 0;
}
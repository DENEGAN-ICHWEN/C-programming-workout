/*
Author: Clay Charry.
Date: 5/05/2023.
Program that receives an input from the user, takes its sine, absolute value and
finally divides it into an interval that increases continuesly.
*/

#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */
#include<stdlib.h>

int main(void)
{ 
double number, sine_abs, interval;
float i, j;

 printf("Enter a number you wish to get the sin and absolute value over an interval: ");
 scanf("%lf", &number);

for(i = 1.0, j = 1.0; i <30; i++, j++)
{
 sine_abs = fabs(sin(number));
 interval = (j /= 10.0, sine_abs / j); // j is diveded in 10 since the sine will always be less than 1
 printf("sin( %lf ) = %lf \t", number, interval);
}


printf("\n+++++++");
return 0;
}
/*
This is a program to practice the comma oddball operatior.
*/

#include <stdio.h>

int main(void)
{
    int result = 0, a = 5, b = 10, c = 2;

    result = (a = b, c + b);

    printf("the result is: %d\n", result);
    printf("a = %d, b = %d, c = %d", a, b, c);

    return 0;
}
/*
A program that prints the amount of bytes each data type has.
Author: Clay Felipe Charry Pinzo
Date: 14/11/2022
*/

#include <stdio.h>

int main(void)
{
    int float_bytes, int_bytes, char_bytes, double_bytes,\
    long_double_bytes, long_int_bytes, short_int_bytes,\
    unsigned_int_bytes, long_unsigned_int_bytes;

    float_bytes = sizeof(float);
    int_bytes = sizeof(int);
    char_bytes = sizeof(char);
    double_bytes = sizeof(double);
    long_double_bytes = sizeof(long double);
    long_int_bytes = sizeof(long int);
    short_int_bytes = sizeof(short);
    unsigned_int_bytes = sizeof(unsigned);
    long_unsigned_int_bytes = sizeof(long unsigned);

    printf("The amount of bytes for the data types in this computer are:\n\
    int: %d\n\
    float: %d\n\
    char: %d\n\
    double: %d\n\
    long double: %d\n\
    long int: %d\n\
    short: %d\n\
    unsigned: %d\n\
    long unsigned: %d", int_bytes, float_bytes, char_bytes, double_bytes,\
    long_double_bytes, long_int_bytes, short_int_bytes, unsigned_int_bytes, long_unsigned_int_bytes);

    return 0;
}
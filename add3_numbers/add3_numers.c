/*
This is a program that adds three numbers and prints its result.
*/

# include <stdio.h>

int main(void) {

    float num1, num2, num3, resut;
    printf("Enter the first number to sum: ");
    scanf("%f", &num1);
    printf("Enter the first number to sum: ");
    scanf("%f", &num2);
    printf("Enter the first number to sum: ");
    scanf("%f", &num3);
    printf("Based on your responses...\nnumber 1 = %f\nnumber 2 = %f\nnumber 3 = %f\n", num1, num2, num3);

    resut = num1 + num2 + num3;

    printf("The result of the sum is: %f\n", resut);

    return 0;
}
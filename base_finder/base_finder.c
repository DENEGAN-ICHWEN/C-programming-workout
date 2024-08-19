/*
Author: Denegan Ichwen
Last update: 11/08/2024
Description: This function checks if there is an i base that to the
nth exponent equals x.
*/
# include <stdio.h>
# include <math.h>

int hasIntegerBase(int x, int n)
{    
    float xNthRoot = 0.0f;
    int integerPart, result = 0;

    if (n > 1)
    {
        xNthRoot = pow(x, 1.0/n);
        printf("xNthRoot = %f\n\a", xNthRoot);
        integerPart =  xNthRoot/1;
        printf("integerPart = %d\n\a", integerPart);

        if (xNthRoot == integerPart)
        {
            result = 1;
        }
    }

    return result;
}

int main()
{
    int x, n, result;

    printf("Enter the exponent n: ");
    scanf("%d", &n);
    printf("Enter the number that is supposed to equal i**n: ");
    scanf("%d", &x);

    result = hasIntegerBase(x, n);

    printf("The answer is: %d\a", result);
    
    return 0;
}
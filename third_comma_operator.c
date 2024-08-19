#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 1, b = 5, k = 0;
    long n = 0;

    printf("Ingrese cualquier numero: ");
    scanf("%d", &k);

    n = (a += b, b*= 2, a + b * k);

    printf("El resultado es %ld", n);

    return 0;
}
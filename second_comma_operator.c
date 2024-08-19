#include <stdio.h>

int main(void){
    int a = 1, b = 5, k;

    k = (a += b, b*= 2, a + b * 2);

    printf("El resultado es %d", k);

    return 0;
}
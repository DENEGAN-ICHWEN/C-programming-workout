/*
Date: 14/11/2022
Fix the error in the program:
#include<stdio.h>
#define PI 3.14159
int main(void)
{ 
 int radius;
 printf(“Enter radius:”);
 scanf(“%d”, &radius);
printf(“volume is : %d \n\n“, 4 *radius*radius*radius/3 );
return 0;
}
*/

#include<stdio.h>
#define PI 3.14159
int main(void)
{ 
 double radius;
 printf("Enter radius:");
 scanf("%lf", &radius);
 printf("volume is : %lf \n\n", 4.0 *PI*radius*radius*radius/3.0 );
 return 0;
}
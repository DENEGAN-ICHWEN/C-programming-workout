/*
Create a function that calculates the smallest angle (float) formed between the hands of a clock (hour and minute hands),
 given an hour (int) and minutes (int). The hour will always have a value between 0 and 11, and the minutes a value between 0 and 59.

Help: Remember that the minute hand jumps from minute to minute, while the hour scrolls continuously as the minutes of an hour advance.
Author: Clay Felipe Charry Pinzón.
Date: 21/11/2022
*/

#include <stdio.h>
#include <stdlib.h>
#define angle_per_hour 30

int main(void)
{
    int hour, minute, distance_clockwise;
    float angle = 0.0;
    
    printf("Enter the hour and minutes on the clock: ");
    scanf("%d %d", &hour, &minute);

    distance_clockwise = abs((minute / 5.0) - hour);
    angle = distance_clockwise * angle_per_hour;

    printf("The minimum angle between the clockwise is: %f", angle);

    return 0;
}
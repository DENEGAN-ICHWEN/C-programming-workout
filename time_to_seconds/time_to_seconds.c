/*
Author: Denegan Ichwen
Last update: 11/08/2024
Description: This function converts a time given in days, hours,
 minutes and seconds into only seconds.
*/
# include <stdio.h>

int convertTimeToSeconds(int days, int hours, int minutes, int seconds)
{    
    hours += days * 24;
    minutes += hours * 60;
    seconds += minutes * 60;

    return seconds;
}

int main()
{
    int seconds, days, hours, minutes;

    printf("Enter the number of days to convert: ");
    scanf("%d", &days);
    printf("Enter the number of hours to convert: ");
    scanf("%d", &hours);
    printf("Enter the number of minutes to convert: ");
    scanf("%d", &minutes);
    printf("Enter the number of seconds to convert: ");
    scanf("%d", &seconds);

    seconds = convertTimeToSeconds(days, hours, minutes, seconds);

    printf("The time converted to seconds is: %d", seconds);
    
    return 0;
}
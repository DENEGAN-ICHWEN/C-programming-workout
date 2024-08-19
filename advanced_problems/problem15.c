/*
Program that computes a better average.
Author: Donald Knuth - Stanford University.
Source: A book on C by Ira Pohl.
*/

# include <stdio.h>

int main(void)
{
    int i;
    double x;
    double avg = 0.0; // A better average.
    double navg; // A naive average.
    double sum = 0.0;

    printf("%5s%17s%17s%17s\n%5s%17s%17s%17s\n\n",
        "Count", "Item", "Average", "Naive avg",
        "----------", "----------", "----------", "----------");
    
    for (i = 1; scanf("%lf", &x) == 1; ++i)
    {
        avg += (x - avg) / i;
        sum += x;
        navg += sum / i;
        
        printf("%5d%17e%17e%17e\n", i, x, avg, navg);
    }
    return 0;
}
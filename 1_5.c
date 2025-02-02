#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
    int lower, upper, step;
    float cel, fahr;
    lower = 0;
    step = 20;
    upper = 300;
    cel = lower;

    for(fahr = UPPER; fahr >= LOWER; fahr -= STEP)   
    {
        printf("%4.0f %6.1f\n", fahr, (5.0/9.0)*(fahr-32.0));
    }
}
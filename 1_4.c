#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

main()
{
    int lower, upper, step;
    float cel, fahr;
    lower = 0;
    step = 20;
    upper = 300;
    cel = lower;

    /*
    while (cel >= lower)
    {
        fahr = (cel * 9.0 / 5.0) + 32;
        printf("%4.0f %5.1f\n", cel, fahr);
        cel -= step;
    }
    */

   /*
    for (cel = 0; cel <= 300; cel += step)
    {
        fahr = (cel * 9.0 / 5.0) + 32;
        printf("%4.0f %5.1f\n", cel, fahr);
    }
   */

    for(fahr = LOWER; fahr <= UPPER; fahr += STEP)   
    {
        printf("%4.0f %6.1f\n", fahr, (5.0/9.0)*(fahr-32.0));
    }
}
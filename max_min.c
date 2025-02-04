#include <stdio.h>

int main()
{
    int first = 1;
    int val, maxval, minval;

    while(scanf("%d", &val) == 1) {
        if (first || val > maxval) maxval = val;
        if (first || val < minval) minval = val;
        first = 0;
    }

    printf("Maxval: %d\nMinval: %d", maxval, minval);

    return 0;
}
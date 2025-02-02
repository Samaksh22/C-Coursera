#include <stdio.h>

int main()
{
    char c;
    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            printf(">-");
            continue;
        }

        if (c == '\b')
        {
            printf("<-");
            continue;
        }

        putchar(c);
    }
}
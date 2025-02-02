#include <stdio.h>

#define true 1
#define false 0

int main()
{
    int c, nl, nw, nc;
    int inword = true;

    nl = nw = nc = 0;
    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
            ++nl;
        
        if ( c == ' ' || c == '\t' || c == '\n')
            inword = false;

        else if (inword == false)
        {
            inword = true;
            ++nw;
        }
    }

    printf("%d %d %d\n", nl, nw, nc);
}
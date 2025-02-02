#include <stdio.h>

main()
{
    /*
    long nc = 0;
    while(getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);
    */

    int c, nl, ns, nt;
    nl = 0;
    ns = 0;
    nt = 0;
    
    while((c=getchar()) != EOF)
    {
        if (c == '\n')
            ++nl;
        if (c == ' ')
            ++ns;
        if (c == '\t')
            ++nt;
    }

    printf("Lines: %5d\nSpaces: %5d\nTabs: %5d", nl, ns, nt);
}
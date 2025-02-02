// #include <stdio.h>

// int main()
// {
//     int nw = 0;
//     int c = getchar();
//     while (c != EOF)
//     {
//         if (c == ' ' || c == '\t' || c == '\n')
//             while (c != EOF && (c == ' ' || c == '\t' || c == '\n'))
//                 c = getchar();

//         if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c == '\''))
//             while (c != EOF && ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c == '\'')))
//                 c = getchar();

//             if (c == ' ' || c == '\t' || c == '\n')
//                 ++nw;

//             else
//                 while (c != EOF && (c != ' ' || c != '\t' || c != '\n'))
//                     c = getchar();

//         c = getchar();
//     }

//     printf("%d\n", nw);
// }

#include <stdio.h>
#include <ctype.h>

#define IN 1
#define OUT 0

int main()
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF)
    {
        ++nc;

        if (c == '\n')
            ++nl;

        if (state == OUT)
        {
            if (isalpha(c))
            {
                state = IN;
                ++nw;
            }
        }
        else
        {
            if (!(isalnum(c) || c == '\''))
                state = OUT;
        }
    }

    printf("%d %d %d\n", nl, nw, nc);
}
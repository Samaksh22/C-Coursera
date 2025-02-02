#include <stdio.h>

#define true 1
#define false 0
#define MAX_SIZE 100

int main()
{
    int c;
    int count = 0, size[MAX_SIZE];
    for (int i = 0; i < MAX_SIZE; i++)
        size[i] = 0;

    int word = false;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
            word = false;

        else if (word == false)
        {
            word = true;
            ++count;
        }

        if (word == true && count <= MAX_SIZE)
        {
            size[count - 1]++;
        }
    }

    printf("%d words\n", count);
    for (int i = 0; i < count && i < MAX_SIZE; i++)
    {
        printf("%4d ", size[i]);
        for (int j = 0; j < size[i]; j++)
            printf("#");
        printf("\n");
    }
}
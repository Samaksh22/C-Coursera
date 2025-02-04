#include <stdio.h>

int main() {
    int guess;

    while(scanf("%d", &guess) == 1)
    {
        if (guess == 42)
        {
            printf("Bazinga!!!\n");
            break;
        }
        else if(guess > 42)
            printf("Too High - guess again\n");
        else
            printf("Too Low - guess again\n");
    }
}
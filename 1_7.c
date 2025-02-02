#include <stdio.h>

int main() {
    // get first character
    char c = getchar();
    
    while (c != EOF)
    {
        // put first character
        putchar(c);

        // if space is encountered move while it is space
        if (c == ' ')
            while ( (c = getchar()) == ' ');
        // else just get the single character
        else
            c = getchar(); 
    }
}
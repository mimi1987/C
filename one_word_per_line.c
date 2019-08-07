#include <stdio.h>

/* print one word per line */

int main()
{
    // declare variables
    int c;
    char newline = '\n';

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t')
            putchar(newline);
        else if (c == '\n')
            putchar(c);
        else
            putchar(c);
    }

    return(0);
}

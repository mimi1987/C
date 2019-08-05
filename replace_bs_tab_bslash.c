#include <stdio.h> /* getchar putchar */

int main()
{
    /* declare a variable to store the characters */
    int c;

    /* read from stdin until EOF */
    while ((c = getchar()) != EOF)
    {
        /* Replace all tabs with \t */
        if (c == '\t')
        {
            c = '\\';
            putchar(c);
            c = 't';
            putchar(c);
        }
        else if (c == '\b') // doesn't work yet, no backspace recognized
        {
            c = '\\';
            putchar(c);
            c = 'b';
            putchar(c);
        }
        else if (c == '\\')
        {
            c = '\\';
            putchar(c);
            putchar(c);
        }
        else
            putchar(c);
    }

    return(0);
}

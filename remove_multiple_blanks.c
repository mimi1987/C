#include <stdio.h>

/* copy input to output replacing two or more blanks with single blank */

int main()
{
    int c;

    while((c = getchar()) != EOF)
    {
        while (c == ' ')
        {
            c = getchar();
            if (c != ' ')
                putchar(' ');
        }
        putchar(c);

    }

    return 0;
}

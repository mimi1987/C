#include <stdio.h>

/* first version of character counting */

main()
{
    long nc;

    nc = 0;

    while (getchar() != EOF)
    {
        ++nc;
        printf("%ld\n", nc);
    }
}

#include <stdio.h> // getchar printf

#define IN 1 // in a word
#define OUT 0 // outside a word

int main()
{
    /* variable declaration */
    int state, c, nc, nw, nl;

    /* variable initialization */
    nc = nw = nl = 0;

    /* read the characters until EOF */
    while ((c = getchar()) != EOF)
    {
        /* count all chars */
        ++nc;

        /* count the newline char */
        if (c == '\n')
            ++nl;

        /* count the words */
        if ( c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }
    /* output nl, nw, nc */
    printf("Lines: %d\nWords: %d\nCharacters: %d\n", nl, nw+1, nc); // last word isn't count therefore nw+1
    return(0);

}

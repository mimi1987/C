#include <stdio.h>

/* counting newlines, blanks and tabs */

int main()
{
    int newlines, blanks, tabs;
    int c;

    newlines = 0;
    blanks = 0;
    tabs = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            ++newlines;
        else if (c == ' ')
            ++blanks;
        else if (c == '\t')
            ++tabs;

    }

    printf("Number of Newlines: %d\n", newlines);
    printf("Number of Blanks: %d\n", blanks);
    printf("Number of Tabs: %d\n", tabs);
}

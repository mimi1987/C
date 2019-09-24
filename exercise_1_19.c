#include <stdio.h>
#define MAXLINE 1000


/*
Reverse a line of input
*/

void reverse(char s[], int i);

int main()
{
    char line[MAXLINE];
    int c;
    int i = 0;

    while ((c = getchar()) != EOF)
    {
        line[i] = c;
        i++;
        if (c == '\n')
        {
            reverse(line, i);
            i = 0;
        }
    }

    return(0);
}

void reverse(char s[MAXLINE], int i)
{
    for (i; i >= 0; i--)
        printf("%c", s[i]);
    printf("\n");
}

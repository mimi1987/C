#include <stdio.h>

/* histogram of the alphabet */

int main()
{

    // counters for the different letters, every letter is also a histogram class
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z, others;

    // holds the single chars in the loop
    int chr;

    // initialize counters
    a=b=c=d=e=f=g=h=i=j=k=l=m=n=o=p=q=r=s=t=u=v=w=x=y=z=others=0;



    // loops over the input
    while ((chr = getchar()) != EOF)
    {
        if (chr == 'a')
            a++;
        else if (chr == 'b')
            b++;
        else if (chr == 'c')
            c++;
        else if (chr == 'd')
            d++;
        else if (chr == 'e')
            e++;
        else if (chr == 'f')
            f++;
        else if (chr == 'g')
            g++;
        else if (chr == 'h')
            h++;
        else if (chr == 'i')
            i++;
        else if (chr == 'j')
            j++;
        else if (chr == 'k')
            k++;
        else if (chr == 'l')
            l++;
        else if (chr == 'm')
            m++;
        else if (chr == 'n')
            n++;
        else if (chr == 'o')
            o++;
        else if (chr == 'p')
            p++;
        else if (chr == 'q')
            q++;
        else if (chr == 'r')
            r++;
        else if (chr == 's')
            s++;
        else if (chr == 't')
            t++;
        else if (chr == 'u')
            u++;
        else if (chr == 'v')
            v++;
        else if (chr == 'w')
            w++;
        else if (chr == 'x')
            x++;
        else if (chr == 'y')
            y++;
        else if (chr == 'z')
            z++;
        else
            others++;
    }

    // counter for the for loop
    int counter = 0;

    printf("a:\t");
    for (counter; counter <= a; counter++)
        putchar('|');
    counter = 0;
    putchar('\n');

    printf("b:\t");
    for (counter; counter <= b; counter++)
        putchar('|');
    counter = 0;
    putchar('\n');

    printf("c:\t");
    for (counter; counter <= c; counter++)
        putchar('|');
    counter = 0;
    putchar('\n');

    printf("d:\t");
    for (counter; counter <= d; counter++)
        putchar('|');
    counter = 0;
    putchar('\n');

    printf("e:\t");
    for (counter; counter <= e; counter++)
        putchar('|');
    counter = 0;
    putchar('\n');

    printf("f:\t");
    for (counter; counter <= f; counter++)
        putchar('|');
    counter = 0;
    putchar('\n');

    printf("g:\t");
    for (counter; counter <= g; counter++)
        putchar('|');
    counter = 0;
    putchar('\n');

    printf("h:\t");
    for (counter; counter <= h; counter++)
        putchar('|');
    counter = 0;
    putchar('\n');

    printf("i:\t");
    for (counter; counter <= i; counter++)
        putchar('|');
    counter = 0;
    putchar('\n');

    printf("j:\t");
    for (counter; counter <= j; counter++)
        putchar('|');
    counter = 0;
    putchar('\n');

    printf("k:\t");
    for (counter; counter <= k; counter++)
        putchar('|');
    counter = 0;
    putchar('\n');

    printf("l:\t");
    for (counter; counter <= l; counter++)
        putchar('|');
    counter = 0;
    putchar('\n');

    printf("m:\t");
    for (counter; counter <= m; counter++)
        putchar('|');
    counter = 0;
    putchar('\n');

    printf("n:\t");
    for (counter; counter <= n; counter++)
        putchar('|');
    counter = 0;
    putchar('\n');

    printf("o:\t");
    for (counter; counter <= o; counter++)
        putchar('|');
    counter = 0;
    putchar('\n');

    printf("p:\t");
    for (counter; counter <= p; counter++)
        putchar('|');
    counter = 0;
    putchar('\n');

    printf("q:\t");
    for (counter; counter <= q; counter++)
        putchar('|');
    counter = 0;
    putchar('\n');

    printf("r:\t");
    for (counter; counter <= r; counter++)
        putchar('|');
    counter = 0;
    putchar('\n');

    printf("s:\t");
    for (counter; counter <= s; counter++)
        putchar('|');
    counter = 0;
    putchar('\n');

    printf("t:\t");
    for (counter; counter <= t; counter++)
        putchar('|');
    counter = 0;
    putchar('\n');

    printf("u:\t");
    for (counter; counter <= u; counter++)
        putchar('|');
    counter = 0;
    putchar('\n');

    printf("v:\t");
    for (counter; counter <= v; counter++)
        putchar('|');
    counter = 0;
    putchar('\n');

    printf("x:\t");
    for (counter; counter <= x; counter++)
        putchar('|');
    counter = 0;
    putchar('\n');

    printf("y:\t");
    for (counter; counter <= y; counter++)
        putchar('|');
    counter = 0;
    putchar('\n');

    printf("z:\t");
    for (counter; counter <= z; counter++)
        putchar('|');
    counter = 0;
    putchar('\n');

    // other characters
    printf("OC:\t");
    for (counter; counter <= others; counter++)
        putchar('|');
    counter = 0;
    putchar('\n');


    return(0);

}

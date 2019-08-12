#include <stdio.h>

/* histogram of length of words */

int main()
{
    // word length classes in steps of 5
    int class_0_to_5, class_6_to_10, class_11_to_15, class_16_to_20, class_21_to_25;
    // set value of classes to 0
    class_0_to_5 = class_6_to_10 = class_11_to_15 = class_16_to_20 = class_21_to_25 = 0;

    // declared int var for a char
    int c, counter;
    counter = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (counter >= 0 && counter <= 5)
            {
                ++class_0_to_5;
                counter = 0;
            }
            else if (counter >= 6 && counter <= 10)
            {
                ++class_6_to_10;
                counter = 0;
            }
            else if (counter >= 11 && counter <= 15)
            {
                ++class_11_to_15;
                counter = 0;
            }
            else if (counter >= 16 && counter <= 20)
            {
                ++class_16_to_20;
                counter = 0;
            }
            else if (counter >= 21 && counter <= 25)
            {
                ++class_21_to_25;
                counter = 0;
            }
            else
                counter = 0;
        }

        else
        {
            ++counter;
        }
    }

    // loop counter
    int n = 0;

    // Histogram output for the user
    printf("class (0-5):\t");
    for (n; n <= class_0_to_5; n++)
        putchar('|');

    putchar('\n');
    n = 0;

    printf("class (6-10):\t");
    for (n; n <= class_6_to_10; n++)
        putchar('|');

    putchar('\n');
    n = 0;

    printf("class (11-15):\t");
    for (n; n <= class_11_to_15; n++)
        putchar('|');

    putchar('\n');
    n = 0;

    printf("class (16-20):\t");
    for (n; n <= class_16_to_20; n++)
        putchar('|');

    putchar('\n');
    n = 0;

    printf("class (21-25):\t");
    for (n; n <= class_21_to_25; n++)
        putchar('|');

    putchar('\n');
    n = 0;

    //printf("value of n var:\t%d\n", n);


    return(0);

}

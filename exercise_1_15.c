#include <stdio.h>

float fahr_to_celsius(float fahrenheit);

int main()
{
    /* Definition of fahr_to_celsius */

    float fahr_to_celsius(float fahrenheit)
    {
        float celsius = (5.0/9.0) * (fahrenheit - 32.0);
        printf("%3.0f %6.1f\n", fahrenheit, celsius);
        return celsius;
    }

    int convert = 1;
    float fahrenheit;

    while(convert)
    {
        printf("Enter Fahrenheit for conversion: \n");
        scanf("%f", &fahrenheit);
        fahr_to_celsius(fahrenheit);
        printf("Go ahead? Y/N\n");
        char go_ahead = getchar();
        if (go_ahead == 'Y' || go_ahead == 'y')
        {
            convert = 1;
        }
        else if (go_ahead == 'N' || go_ahead == 'n')
        {
            convert = 0;
        }
    }
}

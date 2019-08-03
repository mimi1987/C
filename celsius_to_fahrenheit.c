#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    int upper, step;

    printf("Celsius - Fahrenheit\n");

    fahrenheit = 0;
    upper = 300;
    step = 20;

    while (fahrenheit <= upper)
    {
        celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
        printf("%4.1f\t%6.0f\n", celsius, fahrenheit);
        fahrenheit += step;
    }

    return 0;
}

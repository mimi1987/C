#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define VERSION "0.0.1"

int add(int b)
{
    int sum = 10 + b;
    printf("%d\n", sum);
}

int main()
{

    char string[] = "Hallo Welt! Mein Freund";
    int a = 5;
    int *pointer = &a;
    printf("%s %s\n", string, VERSION);
    add(5);
    printf("%x\n", pointer);
    printf("%d\n", *pointer);
    printf("%x\n", &a);

    struct Car
    {
        int number_of_gears;
        char model[20];
        char number_plate[10];
        float horespower;
    };

    struct Car Car1;
    Car1.number_of_gears = 6;
    strcpy(Car1.model, "Nissan 350Z");
    strcpy(Car1.number_plate, "W1010");

    printf("Gears: %d, Model: %s, Number Plate: %s\n", Car1.number_of_gears, Car1.model, Car1.number_plate);

    union Car2
    {
        int number_of_gears;
        float horespower;
        char model[25];
    };

    union Car2 car2;
    car2.number_of_gears = 6;
    printf("Car2 Gears: %d\n", car2.number_of_gears);

    strcpy(car2.model, "Aston Martin");
    printf("Garbage value: %d\n", car2.number_of_gears);
    printf("Model: %s\n", car2.model);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include "pointers.h"

int main()
{
    float my_array[10] = {1.4, 2.4, 3.4, 0.4, 4.4, 55.4, 6.4, 7.4, 9.4, 6.4};
    // int size_array = sizeof(my_array);

    display_array_content(my_array, 10);

    return 0;
}

void display_array_content(float *array, int size)
{
    printf("\n");
    for (int i = 0 ; i < size ; i++)
    {
        printf("Valeur à l'index %d : %f\n", i, array[i]);
    }

}

int test_print()
{
    int young = 10, teen = 15, adult = 20;

    int *my_pointer = &young, *second_pointer = &teen, *third_pointer = &adult;

    printf("\nla valeur de ma variable (via l'adresse pointée par mon pointeur) est : %d\n", *my_pointer);
    printf("la valeur de ma variable est %d\n\n", young);
    printf("l'adresse de mon pointeur est %p\n\n", &my_pointer);
    printf("l'adresse de ma variable est  %p\n", &young);
    printf("la valeur de mon pointeur est %p\n", my_pointer);

    return 0;
}

void triplePointeur(int *pointeurSurNombre)
{
    *pointeurSurNombre *= 3; // On multiplie par 3 la valeur de nombre
}

int test_main()
{
    int hour = 0;
    int minutes = 0;
    
    printf("\nTotal en minutes : \n");
    scanf("%d", &minutes);

    printf("Valeur de hour %d\n", hour);
    printf("Adresse de hour %p ?\n\n", &hour);

    change_hours_format(&hour, &minutes);
    printf("\n%d heure(s) et %d minute(s)", hour, minutes);
    return 0;
}

void change_hours_format(int *pointer_hour, int *pointer_minute)
{
    *pointer_hour = *pointer_minute / 60;
    *pointer_minute = *pointer_minute % 60;

    printf("Valeur de pointer_hour %d\n", *pointer_hour);
    printf("Adresse de pointer_hour %p ?\n\n", pointer_hour);
}
#include <stdio.h>
#include <stdlib.h>
#include "pointers.h"

int main()
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


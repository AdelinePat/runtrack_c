#include <stdio.h>
#include <stdlib.h>
#include "pointers.h"

int main()
{
    
    int nombre = 0;
    printf("Veuillez entrer un nombre\n");
    scanf("%d", &nombre);

    triplePointeur(&nombre); // On envoie l'adresse de nombre à la fonction
    printf("%d", nombre); // On affiche la variable nombre. La fonction a directement modifié la valeur de la variable car elle connaissait son adresse

    return 0;

    
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
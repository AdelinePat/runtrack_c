#include <stdio.h>
#include <stdlib.h>
#include "file_management.h"

typedef struct {
    int x;
    int y;
    // char name[100];
} Coordinates;

int main(int argc, char const *argv[])
{
    Coordinates points;
    points.y = 2;
    points.x = 20;

    printf("\nLa taille d'un int %d\n", sizeof(int));
    printf("La taille d'un float %d\n", sizeof(float));
    printf("La taille d'un double %d\n", sizeof(double));
    printf("La taille d'un long %d\n", sizeof(long));
    printf("La taille d'un long long %d\n", sizeof(long long));
    printf("La taille d'un char %d\n", sizeof(char));
    
    printf("La taille d'une structure basique %d\n", sizeof(Coordinates));
    printf("La taille d'une structure basique %d\n", sizeof(points));

    return 0;
}

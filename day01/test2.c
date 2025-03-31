#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
    int first_number = 0, second_number = 0, result = 0;
    printf("Veuillez entrer les nombres :");
    scanf("%d", &first_number);
    scanf("%d", &second_number);
    result = first_number + second_number;
    printf("Le resultat de l'operation %d + %d = %d", first_number, second_number, result);
}

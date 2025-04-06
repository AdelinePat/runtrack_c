#include <stdio.h>
#include <stdlib.h>
#include "file_management.h"

int main(int argc, char const *argv[])
{
    FILE * file = NULL;
    file = fopen(FILE_PATH, "r+");
    int age = 0;
    char name[100] = "";
    int actual_char = 0;
    char string[SIZE_MAX_ARRAY] = "";

    printf("\nvaleur du pointeur file : %p\n", file);

    if(file != NULL)
    {
        printf("Ouverture du fichier avec succès.");
        // fseek(file, 1, SEEK_END);
        fputs("\nMouhahaha!!!\nJ'en ai tellement marre de cette formation...\nJe veux des vacances bien longues là.\n\n", file);
        fputc('A', file);

        printf("Votre nom ?\n");
        scanf("%s", &name);
        printf("Quel âge avez vous ?\n");
        scanf("%d", &age);

        fprintf(file, "Vous êtes %s et vous avez %d ans", name, age);
        fclose(file);
    }
    else
    {
        printf("Echec de l'ouverture du fichier.");
    }

    file = fopen(FILE_PATH, "r");
    

    if (file != NULL)
    {
        // do 
        // {
        //     actual_char = fgetc(file);
        //     printf("%c", actual_char);
        // } while (actual_char != EOF);

        printf("\n\nTEST DE FGETS\n\n");
        do
        {
            printf("test de string : %s", string);
        } while (fgets(string, SIZE_MAX_ARRAY, file) != NULL);

        // fseek(file, 2, SEEK_SET);
        fclose(file);
        // rename("test.txt", "test2.txt");
        // remove("test2.txt");
        
        
    }

    printf("La taille de age est de %d", sizeof(age));

    printf("\nvaleur du pointeur file : %p\n", file);

    

    return 0;
}

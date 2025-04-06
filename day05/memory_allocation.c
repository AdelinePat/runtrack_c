#include <stdlib.h>
#include <stdio.h>
#include "memory_allocation.h"

int main(int argc, char const *argv[])
{
    secure_string_input();
    return 0;
}

void secure_string_input()
{
    char name[10];
    printf("Quel est votre nom ? ");
    fgets(name, 10, stdin);
    
    char* new_name = NULL;

    new_name = get_rid_of_new_line(name, 10);

    printf("Ah votre nom est donc %s !", new_name);
}

char* get_rid_of_new_line(char * string, int size)
{
    printf("Avant modif : %s", string);

    char* new_string = NULL;
    new_string = malloc(size * sizeof(char));

    if (new_string == NULL)
    {
        exit(0);
    }
    
    int j = 0;
    for (int i = 0; i < size ; i ++)
    {
        if (string[i] != '\n')
        {
            new_string[j] = string[i];
            j++;
        }
    }

    printf("Après modif : %s", new_string);
    string = new_string;

    // free(new_string);

    return new_string;

}

void create_dynamic_array()
{
    int number_of_friends = 0;
    int i;
    int* friends_age = NULL;

    printf("Combien avez vous d'amis ? \n");
    scanf("%d", &number_of_friends);

    if (number_of_friends > 0)
    {
        friends_age = malloc(number_of_friends * sizeof(int));
        if (friends_age == NULL)
        {
            exit(0);
        }

        for (i = 0; i < number_of_friends ; i++)
        {
            printf("Quel est l'âge de votre %de amis\n", i+1);
            scanf("%d", &friends_age[i]);
        }

        printf("Vos amis on les âges suivant :\n");

        for (i = 0; i < number_of_friends; i++)
        {
            printf("%d ans\n", friends_age[i]);
        }

        free(friends_age);
    }


}


void first_step_using_malloc()
{
    int* memory_allocation_pointer = NULL;
    printf("Adresse : %p\nTaille : %d\n\n", memory_allocation_pointer, sizeof(*memory_allocation_pointer));

    memory_allocation_pointer = malloc(sizeof(int));

    if (memory_allocation_pointer == NULL)
    {
        printf("Dommage, malloc n'a pas marché");
        exit(0);
    }

    printf("Veuillez entrer un chiffre : ");
    scanf("%d", memory_allocation_pointer);

    printf("\n\nVotre chiffre est bien le numéro %d\n\n", *memory_allocation_pointer);
    printf("Adresse : %p\nValeur : %d\n\n", memory_allocation_pointer, *memory_allocation_pointer);
    free(memory_allocation_pointer);
    printf("Adresse : %p\nValeur : %d\n\n", memory_allocation_pointer, *memory_allocation_pointer);
}

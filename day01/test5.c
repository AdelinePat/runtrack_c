#include <stdio.h>
#include <stdlib.h>
#include "test5.h"

int display_menu()
{
    int choice = 0;
    char message[] = "Vous avez choisi :";

    /*
    char * variable_name = value  == char variable_name[] = value
    char * or char ...[] = pointer to first element of char list
    */

    char *item_1 = "Royal Cheese !!";
    char *item_2 = "Mc Deluxe !";
    char *item_3 = "Mc Bacon ?";
    char *item_4 = "Big Mac";
    char *item_5 = "Booyah";

    char * my_items[] = {item_1, item_2, item_3, item_4, item_5};
    
    printf("=== Menu ===\n");

    for (int i=0; i < 5; i++)
    {
        printf("%d. %s\n", i+1, my_items[i]);
    }
    
    printf("\nVotre choix ?\n");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("%s %s, se trouvant au pointeur n°%p", message, my_items[0], &my_items[0]);
            break;
        case 2:
            printf("%s %s, se trouvant au pointeur n°%p",message, my_items[1], &my_items[1]);
            break;
        case 3:
            printf("%s %s, se trouvant au pointeur n°%p", message, my_items[2], &my_items[2]);
            break;
        case 4:
            printf("%s %s, se trouvant au pointeur n°%p", message, my_items[3], &my_items[3]);
            break;
        case 5:
            printf("%s %s, se trouvant au pointeur n°%p", message, my_items[4], &my_items[4]);
            break;
        default:
            printf("Cet item est inconnu");
            break;
    }

    return 0;
}
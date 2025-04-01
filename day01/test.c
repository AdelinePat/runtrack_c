#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{   
    int choice = 0;
    char message[] = "Vous avez choisi :";

    /*
    char * variable_name = value  == char variable_name[] = value
    char * or char ...[] = pointer to first element of char list
    */

    char item_1[] = "Royal Cheese";
    char item_2[] = "Mc Deluxe";
    char item_3[] = "Mc Bacon";
    char item_4[] = "Big Mac";

    char * my_items[] = {item_1, item_2, item_3, item_4};
    
    printf("=== Menu ===\n");

    for (int i=0; i < 4; i++)
    {
        printf("%d. %s\n", i+1, my_items[i]);
    }
    
    printf("\nVotre choix ?\n");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("%s %s",message, my_items[0]);
            break;
        case 2:
            printf("%s %s",message, my_items[1]);
            break;
        case 3:
            printf("%s %s",message, my_items[2]);
            break;
        case 4:
            printf("%s %s",message, my_items[3]);
            break;
        default:
            printf("Cet item est inconnu");
            break;
    }
}
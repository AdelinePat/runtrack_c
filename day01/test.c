#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{   
    int choice = 0;
    char message[] = "Vous avez choisi :";

    const char item_1[] = "Royal Cheese";
    const char item_2[] = "Mc Deluxe";
    const char item_3[] = "Mc Bacon";
    const char item_4[] = "Big Mac";
    printf("=== Menu ===\n");

    // char my_items[4][13] = {item_1, item_2, item_3, item_4};
    char my_items[4][13] = {"Royal Cheese", "Mc Deluxe", "Mc Bacon", "Big Mac"};

    // char arr[3][10] = {"Geek", "Geeks",
    //     "Geekfor"}; 

    for (int i=0; i < 4; i++)
    {
        int y = i+1;
        printf("%d. %s\n", y, my_items[i]);
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
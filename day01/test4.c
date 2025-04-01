#include "test5.c"

int main(int argc, char *argv[])
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
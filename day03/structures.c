#include <stdio.h>
#include <stdlib.h>
#include "structures.h"
#include <string.h>

int main(int argc, char const *argv[])
{
    Bidule point;
    point.x = 12;
    point.y = 45;

    Person user;
    init_values(&user);


    // user.lastname = "Doe";
    // user.firstname = "John";
    
    // printf("Valeur de l'adresse de user : %p\n", &user);
    // printf("Valeur de l'adresse de firstname %p\n", &user.firstname);
    printf("Nom : %s\nPrenom : %s\nAdresse : %s\nAge : %d\nEtudiant ? %d\n\n", user.lastname, user.firstname, user.location, user.age, user.student);
    
    // user.age = 24;
    // user.student = 1;
    // user.location = "Somewhere over the rainbow";

    // printf("Quel est votre nom ? ");
    // scanf("%s", user.lastname);
    // printf("Votre prenom ? ");
    // scanf("%s", user.firstname);
    // // printf("Votre adresse ?");
    // // scanf("%s", user.location);

    // printf("Vous vous appelez %s %s et vous habitez à : %s", user.firstname, user.lastname, user.location);

    return 0;
}

void init_values(Person *pointer)
{
    
    (*pointer).firstname[0] = 'J';
    (*pointer).firstname[1] = 'o';
    (*pointer).firstname[2] = 'h';
    (*pointer).firstname[3] = 'n';

    // pointer->lastname[0] = 'D';
    // pointer->lastname[1] = 'o';
    // pointer->lastname[2] = 'e';
    strcpy(pointer->lastname, "Doe");

    // (*pointer).firstname = "John";
    // (*pointer).location = "Somewhere over the rainbow";
    printf("Valeur *pointer.firstname %p\n\n", pointer->firstname);
    (*pointer).age = 28;
    (*pointer).student = 1;

    // pointer->firstname == (*pointer).firstname
}



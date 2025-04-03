#ifndef STRUCTURE_H
#define STRUCTURE_H
// placer les prototypes et les structures ici
typedef struct Coordinates Bidule;
typedef struct Person Person;
typedef enum Volume Volume;

struct Coordinates
{
    int x;
    int y;
};

struct Person 
{
    char lastname[100];
    char firstname[100];
    char location[1000];

    int age;
    int student;
};

enum Volume
{
    LOW = 10, MEDIUM = 50, HIGH = 100
};

void init_values(Person * pointer);

#endif
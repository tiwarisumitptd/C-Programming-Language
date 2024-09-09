#include<stdio.h>
#include<string.h>

typedef struct pokemon
{
    int hp;
    int speed;
    int attack;
    char tier;
    char name [30];
} pokemon;

int main () {
    pokemon pikachu;
    pikachu. hp = 60;
    pikachu. speed = 100;
    pikachu. attack = 50;
    pikachu. tier ='A';
    strcpy (pikachu. name, "pikachu");
    //int *x->address of integer pointer
    pokemon*x = &pikachu;

    printf ("%p\n", &pikachu. hp);
    printf ("%p\n", &pikachu. speed);
    printf ("%p\n", &pikachu. attack);
    printf ("%p\n", &pikachu. tier);
    printf ("%p\n", pikachu. name);
    printf ("\n %p", x);
    return 0;
}
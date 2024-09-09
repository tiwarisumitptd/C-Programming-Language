#include<stdio.h>
#include<string.h>
int main () {
  typedef struct pokemon {
    char name [20];
    int hp;
    int attack;
    int defence;
  } pokemon;
  pokemon a, b, c;
  strcpy (a.name, "pikachu");
  a. hp = 80;
  a. attack = 100;
  a.defence = 60;
  printf ("Name is: %s\n Hp is: %d\n Attack is: %d\n Defense is: %d\n", a.name, a. hp, a. attack, a. defence);
  b = a;
  strcpy (b.name, "charizard");
  printf ("Name of b is: %s\n Hp of b is: %d\n Attack of b is: %d\n Defense of b is: %d\n", b.name, b. hp, b. attack, b. defence);
  return 0;
}
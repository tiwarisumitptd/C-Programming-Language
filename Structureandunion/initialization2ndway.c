#include<stdio.h>
#include<string.h>
int main ()
{
struct pokimon {
  char name [50];
    int level;
    int hp;
    int attack;
};
  struct pokimon pikachu ={"pikachu",100,100,100};
  printf ("name: %s\n", pikachu.name);
  printf ("level: %d\n", pikachu.level);
  printf ("hp:%d\n", pikachu. hp);
  printf("attack:%d\n",pikachu.attack);
  return 0;
}
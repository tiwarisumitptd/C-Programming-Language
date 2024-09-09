#include<stdio.h>
static int c;
void storageclass () {
  c = 10;
  printf ("The value of c is: %d", c);
}
int main () {
  while (c<=10) {
    storageclass ();
    c ++;
  }
  return 0;
}
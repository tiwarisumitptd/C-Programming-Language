#include<stdio.h>
int storageclass () {
  register int a;
  a = 56;
  printf ("The value of a is: %d", a);
  return 0;
}
int main () {
  storageclass ();
  return 0;
}
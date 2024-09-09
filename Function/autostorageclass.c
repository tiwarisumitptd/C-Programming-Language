#include<stdio.h>
int storageclass () {
  auto int a = 10;
  auto int b = 20;
  int x = a + b;
  printf ("The value of x is %d", x);
  return x;
}
int main () {
  storageclass ();
  return 0;
}
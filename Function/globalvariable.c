#include<stdio.h>
int a;
int b;
int c;
int main () {
  printf ("Enter the value of a:");
  scanf ("%d", &a);
  printf ("The value of b:", b);
  scanf ("%d", &b);
  c = a + b;
  printf ("the addition of a and b is: %d", c);
  return 0;
}
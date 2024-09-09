#include<stdio.h>
void swap (int a, int b) {
  int c;
  c = a;
  a = b;
  b = c;
  printf ("The value of a after swapping is %d\n", a);
  printf ("The value of b after swapping is %d\n", b);  
}
int main () {
  int a;
  printf ("Enter the value of a:");
  scanf ("%d", &a);
  int b;
  printf ("Enter the value of b:");
  scanf ("%d", &b);
  swap (a, b);
  return 0;
}
#include<stdio.h>
#include<string.h>
int main () {
struct student {
    int roll;
    char name [50];
    int marks;
};
struct student s1;
  s1.marks = 100;
  s1.roll = 1;
  strcpy (s1.name,"Gazi Abbaas");
  printf ("%d %s %d", s1.roll, s1.name, s1.marks);
  return 0;
}
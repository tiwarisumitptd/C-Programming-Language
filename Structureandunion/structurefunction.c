#include <stdio.h>
#include<string.h>

typedef struct student {
   char name [50];
   int per, rno;
} student;

void result (student s1);

int main () {
   struct student s1;
   strcpy (s1.name,"Prteek Pandey");
   printf ("Enter the roll number: ");
   scanf ("%d", &s1.rno);
   printf ("Enter percentage: ");
   scanf ("%d", &s1.per);
   result (s1);
   return 0;
}

void result (student s1) {
   printf ("\n Displaying information\n");
   printf ("Name: %s\n", s1.name);
   printf ("Roll number: %d", s1.rno);
   printf ("\n Percentage: %d", s1.per);
   return;
}
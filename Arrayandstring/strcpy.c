#include <stdio.h>
#include <string.h>

int main() {
   char source[] = "ABC";
   char goal[4];
   strcpy(goal, source); 
   printf("goal string is: %s\n", goal);
   return 0;
}
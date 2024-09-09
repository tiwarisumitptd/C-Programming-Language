#include<stdio.h>
#include<string.h>
int main () 
{
   char str1 = "ABC";
   char str2 = "ABC";
   int a;
   a = strcmp (str1, str2);
   printf ("result of comparison is: %d", a);
   return 0;
}
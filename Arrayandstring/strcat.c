#include <stdio.h>
#include <string.h>
int main() {
   char str1[] = "ABC";
   char str2[] = "abc"; 
   char str3 = strcat(str1, str2); 
   printf("The concatenated value of strings is: %s", str3);
   return 0;
}
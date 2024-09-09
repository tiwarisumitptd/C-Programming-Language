#include<stdio.h>
#include<string.h>
int main () {
  const char* str = "Hello world!";
  const char* ch = strchr (str, '0');
  if (ch != 0) {
   printf ("character 'ch' found at position: %ld\n", ch - str);
  }
  else {
   printf ("character not found \n");
  }
   return 0;
}
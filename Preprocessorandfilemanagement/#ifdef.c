#include<stdio.h>
#define DEBUG 1
int main () {
    #ifdef DEBUG
      printf ("debugging is enabled");
    #endif
return 0;
}
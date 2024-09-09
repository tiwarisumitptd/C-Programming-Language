#include<stdio.h>
#define DEBUG 1
int main () {
    #ifndef DEBUG
      printf ("debugging is disabled");
    #endif
return 0;
}
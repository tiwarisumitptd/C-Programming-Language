#include<stdio.h>
#include<stdlib.h>
int main () {
    int a = 25; 
    int *ptr;
    ptr = (float*) calloc (a, sizeof(int));
    if (ptr == NULL) {
        printf ("\n Error in allocating of memory");
    }
    else {
        printf ("\n memory allocation done");
    }
  return 0;
}
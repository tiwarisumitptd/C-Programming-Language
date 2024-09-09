#include<stdio.h>
#include<stdlib.h>

int main () {
    int a = 5; 
    int *ptr;
    ptr=(int*) malloc (a*sizeof(int));
    if (ptr== NULL) {
        printf ("\n Error in allocating of memory");
    }
    else {
        printf ("\n memory allocation done");
    }
  return 0;
}
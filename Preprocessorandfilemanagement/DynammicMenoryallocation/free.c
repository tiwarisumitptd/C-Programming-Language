#include <stdlib.h>
#include <stdio.h>
int main () {
    int *ptr;
    ptr = (int *) malloc (5 * sizeof(int)); 
    if (ptr == NULL) {
    } 
    else {
        int *newPtr = (int *) realloc (ptr, 10 * sizeof(int));
        if (newPtr == NULL) {
            printf ("the memory is allocated");
        } 
        else {
            free(newPtr);
          printf ("the memory is free");
        }
    }
    return 0;
}
 
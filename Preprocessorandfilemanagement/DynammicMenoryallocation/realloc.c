#include <stdlib.h>
#include <stdio.h>
int main () {
    int *ptr;
    ptr = (int*) malloc (5 * sizeof(int)); 
    if (ptr == NULL) {
    } 
    else {
        int* newptr = (int *) realloc (ptr, 10 * sizeof(int));
        if (newptr == NULL) {
            printf ("the memory is allocated");
        } 
        else {
            printf ("the memory is not allocated");
        }
    }
    return 0;
}

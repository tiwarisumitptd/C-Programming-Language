#include <stdio.h>
int main () {
    int i, j;
    for (i = 1; i <= 3; i++) {
        printf ("Outer Loop Iteration %d:\n", i);
        for (j = 1; j <= 3; j++) {
            if (j == 3) {
                printf ("\t Skipping inner loop iteration %d\n", j);
                continue; 
            }
            printf ("\t Inner Loop Iteration %d %d\n", i, j);
        }
        printf("\n");
    }
    return 0;
}
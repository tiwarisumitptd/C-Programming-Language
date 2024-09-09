#include<stdio.h>
int main () {
    int arr [5];
    for (int i=0; i<5; i++) {
        printf ("Enter array value:\n");
        scanf ("%d", &arr [i]);
        printf ("the value of array is: %d\n", arr[i]);
    }
    return 0;
}
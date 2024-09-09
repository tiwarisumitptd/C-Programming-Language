#include<stdio.h>
#define SIZE 10
int main () {
    int n;
    printf ("Enter a number:");
    scanf ("%d", &n);
    #if SIZE == n
       printf ("The given number is equal to SIZE");
    #elif size > n
        printf ("The given number is lesser than size");
    #else
        printf ("The given number is greater than size");
    #endif;
    return 0;
}
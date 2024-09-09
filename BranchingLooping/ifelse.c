#include<stdio.h>
int main () {
    int x;
    printf ("Enter a number:");
    scanf ("%d", &x);
    if (x % 2 == 0) {
        printf ("x is even number");
    }
    else {
        printf ("x is odd number");
    }
return 0;
}
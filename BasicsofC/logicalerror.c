#include<stdio.h>
int main () {
    int a;
    printf ("Enter a number:");
    scanf ("%d", &a);
    if (a/2 == 0) {
        printf ("a is even number");
    }
    else {
        printf ("a is odd number");
    }
return 0;
}

#include<stdio.h>
int main () {
    int a;
    printf ("Enter a number:");
    scanf ("%d", &a);
    if(a%2==0) {
        printf ("given number is an even number");
    }
    return 0;
}

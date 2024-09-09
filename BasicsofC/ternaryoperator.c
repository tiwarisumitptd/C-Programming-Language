#include<stdio.h>
int main ()
{
    int n;
    printf ("enter a number: ");
    scanf ("%d", &n);
    n%2==0? printf ("even number"): printf ("odd number");
    return 0;
}

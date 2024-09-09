#include<stdio.h>
int main () {
    int a;
    printf ("Enter a value: ");
    scanf ("%d", &a);
    int*x = &a;
    int b;
    printf ("Enter b value: ");
    scanf ("%d", &b);
    int*y = &b;
    printf ("The value of variable a is: %d\n", a); 
    //printf ("the value of a is: %d", *x); used for store value of variable inside available the pointer available
    printf ("The value of variable b is: %d\n", b);
    printf ("The address of variable a is: %p\n", a);
    //printf ("the address of variable a is: %d\n", &a); used when the pointer variable of b is not made
    printf ("The address of variable b is: %p\n", b);
    printf ("The address of pointer variable x is: %p\n", &x); //%p used for store the address of pointer.
    printf ("The address of pointer variable y is: %p\n", &y);
    return 0;
}
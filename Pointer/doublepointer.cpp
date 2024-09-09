#include<stdio.h>
int main () {
    int a;
    printf ("Enter a value: ");
    scanf ("%d", &a);
    int* x = &a; // int* -> used for store the address of variable
    int** y = &x; // int** -> used for store the address of pointer
    printf ("the value of a is: %d\n", a);
    printf ("the address of variable a is: %p\n", *x); // %p used for store the address
    printf ("the address of pointer y is: %p \n", **y); //& use or not when %p is available
    return 0;
}
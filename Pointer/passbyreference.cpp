#include<stdio.h>
void swap (int* x, int* y) {
    int temp;
    temp = *x; //temp = a value
    *x = *y; //x = b value
    *y = temp; //y = a value
    return;
}

int main () {
    int a;
    printf ("Enter a value: ");
    scanf ("%d", &a);
    int b;
    printf ("Enter b value: ");
    scanf ("%d", &b);
    swap (&a, &b);
    printf ("the value of a is: %d\n", a);
    printf ("the value of b is: %d\n", b);
    return 0;
}
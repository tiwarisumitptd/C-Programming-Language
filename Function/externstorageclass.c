#include <stdio.h>
extern int x;
void storageclass ();
int main () {
    x = 5;
    storageclass ();
    return 0;
}
void storageclass () {
    printf ("The value of x is: %d", x);
}
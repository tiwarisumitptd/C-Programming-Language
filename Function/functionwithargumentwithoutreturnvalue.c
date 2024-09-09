#include<stdio.h>
void greetuser (char name [67]) {
    printf ("Jay shree Ram %s \n", name);
}
int main () {
    char name [67];
    printf ("Enter your name:");
    scanf ("%s", name);
    greetuser (name);
    return 0;
}
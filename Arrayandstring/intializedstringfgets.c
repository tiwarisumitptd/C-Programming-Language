#include <stdio.h>
#define MAX 50
int main ()
{
    char str [MAX];
    fgets (str, MAX, stdin);
    printf ("String is: \n");
    puts(str);
    return 0;
}
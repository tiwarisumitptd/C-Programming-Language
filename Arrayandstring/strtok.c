#include<stdio.h>
#include<string.h>
int main () {
    char str [] = "Hello, world, Welcome"; 
    char* token = strtok (str, ",");
    while (token != NULL) {
        printf ("the splitting of the string is: %s\n", token);
        token = strtok (NULL, ",");
    }
    return 0;
}
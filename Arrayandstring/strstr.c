#include <stdio.h>
#include <string.h>
int main () {
    char* str = "Hello world!";
    char* ch = strstr (str, "world");
    if (ch != NULL) {
        printf ("The substring of the given string is: %s\n", ch);
    } 
   else {
        printf ("Substring not found.\n");
    }
    return 0;
}
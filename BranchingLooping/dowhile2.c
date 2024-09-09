#include <stdio.h>
int main () {
    int number;

    do {
        printf ("Please enter a number between 1 and 100: ");
        scanf ("%d", &number);

        if (number < 1 || number > 100) {
            printf ("Invalid input. Please try again.\n");
        }
    } while (number < 1 || number > 100);

    printf ("You entered: %d\n", number);

    return 0;
}
#include<stdio.h>
int main() {
    int a, b, c;
    printf("Enter 1st number a:");
    scanf("%d", &a);
    printf("Enter 2nd number b:");
    scanf("%d", &b);
    printf("Enter 3rd number c:");
    scanf("%d", &c);

    if (a < b) {
        if (a > c) {
            printf("%d is greatest", a);
        } else {
            printf("%d is greatest", c);
        }
    } else if (b < c) {
        printf("%d is greatest", c);
    } else {
        printf("%d is greatest", b);
    }

    return 0;
}

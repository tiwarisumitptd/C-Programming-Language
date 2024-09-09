   #include<stdio.h>
    int main () {
    char grade;
    printf ("Enter the grade: ");
    scanf ("%c", &grade);
    switch (grade) {
        case 'A':
        printf("Excellent\n");
        break;
        case 'B':
        printf("Good\n");
        break;
        case 'C':
        printf("satisfactory\n");
        break;
        default:
        printf ("Need Improvement.\n");
    }
    return 0;
   }
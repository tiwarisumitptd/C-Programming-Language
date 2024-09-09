#include <stdio.h>
#include <string.h>

int main () {
    struct student {
        int marks;
        int age;
        char name[50];  // Define the size of the name array
    };

    struct student s1;
    s1.marks = 700;
    s1.age = 18;
    strcpy(s1.name, "Shivam");

    printf("name: %s\n", s1.name);
    printf("marks: %d\n", s1.marks);
    printf("age: %d\n", s1.age);

    return 0;
}
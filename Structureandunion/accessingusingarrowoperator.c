#include <stdio.h>
#include <string.h>
struct student {
    int id;
    char name [50];
    float percentage;
};

int main () {
    struct student s1; 
    struct student *ptr;
    s1.id = 1;
    strcpy (s1.name, "Yes");
    s1. percentage = 85.5;
    ptr = &s1;
    printf ("Student ID: %d\n", ptr->id);
    printf ("Student Name: %s\n", ptr->name);
    printf ("Percentage: %.2f\n", ptr->percentage);
    return 0;
}
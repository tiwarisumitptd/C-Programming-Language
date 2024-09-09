#include <stdio.h>
#include <string.h>

int main() {
    typedef struct cricketer {
        char name[20];
        int age;
        int no_of_matches;
        float avg_runs;
    } cricketer;

    cricketer arr[4];
    char cricketers [50];

    for (int i = 0; i < 4; i++) {
        printf("Enter details for cricketer %d:\n", i + 1);
        printf("Name: ");
        fgets(arr[i].name, sizeof(arr[i].name), stdin);
        arr[i].name[strcspn(arr[i].name, "\n")] = 0; 
        printf("Age: ");
        fgets(cricketers, sizeof(cricketers), stdin);
        sscanf(cricketers, "%d", &arr[i].age);
        printf("No of matches: ");
        fgets(cricketers, sizeof(cricketers), stdin);
        sscanf(cricketers, "%d", &arr[i].no_of_matches);
        printf("Average runs: ");
        fgets(cricketers, sizeof(cricketers), stdin);
        sscanf(cricketers, "%f", &arr[i].avg_runs);

        printf("\n");
    }

    printf("\nCricketer Details:\n");
    for (int i = 0; i < 4; i++) {
        printf("Name: %s\n", arr[i].name);
        printf("Age: %d\n", arr[i].age);
        printf("No of matches: %d\n", arr[i].no_of_matches);
        

    return 0;
}
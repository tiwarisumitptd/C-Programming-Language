#include<stdio.h>
#include<string.h>
int main () {
  typedef struct cricketer {
     char name [20];
     int age;
     int no_of_matches;
     float avg_runs;
  } cricketer;

  cricketer c1;
  strcpy (c1.name,"Rohit Sharma");
  c1.age = 35;
  c1.no_of_matches = 100;
  c1.avg_runs = 50.5;
  printf ("Name: %s\n", c1.name);
  printf ("Age: %d\n", c1.age);
  printf ("No of matches: %d\n", c1.no_of_matches);
  printf ("Average runs: %f\n", c1.avg_runs);
  return 0;
}
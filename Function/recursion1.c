#include<stdio.h>
int factorial (int n) {
// return n*factorial(n-1);
    if (n==1 || n==0) return 1;
    int recans = n*factorial(n-1);
    return recans;
}
int main () {
     int n;
     printf ("Enter a number:");
     scanf ("%d", &n);
     int fact = factorial(n);
      printf ("the factorial of given number is: %d", fact);
    return 0;
}
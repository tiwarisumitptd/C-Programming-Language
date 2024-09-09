 #include <stdio.h>
 // Function prototype
 int add (int a, int b);

 // Main function
 int main () {
    int num1 = 5, num2 = 7;
    int sum;

    // Function call
    sum = add (num1, num2);

    printf ("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
 }

 // Function definition
 int add (int a, int b) {
    return a + b;
 }
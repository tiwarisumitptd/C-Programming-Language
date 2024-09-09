#include<stdio.h>
int sum (int, int);  
int main ()  
{  
    int a, b, result;   
    printf ("\n Going to calculate the sum of two numbers:");  
    printf ("\n Enter two numbers:");  
    scanf ("%d %d", &a, &b);  
    result = sum (a, b);  
    printf ("\n the sum is: %d", result);  
}  
int sum (int a, int b)  
{  
    return a+b;  
}  
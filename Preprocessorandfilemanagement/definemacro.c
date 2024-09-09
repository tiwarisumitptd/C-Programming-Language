#include<stdio.h>
#define SQUARE(r) r*r 
#define PI 3.14
int main () {
    float var = PI;
    int r;
    printf ("Enter the radius of the circle:"); 
    scanf ("%d",&r);
    printf ("the area of circle is: %f \n", PI* SQUARE(r));
    return 0;
}
#include <stdio.h>  
int main () {  
int i = 1;  
while (i<= 10) {  
if (i == 5) {  
break; // Exit the loop when i becomes 5  
}  
printf ("%d ", i);  
i++;  
}  
printf("\n");  
return 0;  
}  
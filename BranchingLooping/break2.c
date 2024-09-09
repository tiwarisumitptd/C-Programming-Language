#include<stdio.h>
int main () {  
for (int i = 1; i<= 3; i++) {  
for (int j = 1; j <= 3; j++) {  
if (i == 2 && j == 2) {  
break; // Exit both loops when i=2 and j=2  
}  
printf ("(%d, %d) ", i, j);  
}  
}  
printf("\n");  
return 0; 
}  
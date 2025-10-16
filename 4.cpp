#include <stdio.h> 
void main() 
{ 
 int i,j; 
 for (i=1; i<=10; i+=2) { 
 for (j=1; j<=i; j++) 
 printf("*"); 
 printf("\n"); 
   } 
    
 for (i=10; i>=1; i-=2) { 
 for (j=i; j>=1; j--) 
 printf("*"); 
 printf("\n"); 
   } 
   printf("--------End-----------\n");
}
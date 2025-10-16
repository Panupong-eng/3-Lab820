#include <stdio.h> 
int main() 
{ 
 int test,a,b; 
 printf("Prime number between 1-200 is\n"); 
 for (a=1; a<=200; a++) { 
 test = 1; 
 for (b=2;b<a;b++) { 
 if (! (a%b)) 
 test = 0; 
 } 
 if (test) 
 printf ("%d \t \t",a); 
   } 
   printf("--------End-----------\n"); 
} 
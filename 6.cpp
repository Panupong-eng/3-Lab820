#include <stdio.h> 
int main() 
{ 
 int count=1,fact; 
 long int sum=1; 
 printf("Please enter number of factorial : "); 
 scanf("%d", &fact); 
 while (count <=fact) { 
 sum = sum* count; 
 count = count + 1; 
   } 
 printf("Result of %d! is %ld", fact, sum); 
   printf("\n--------------------"); 
}
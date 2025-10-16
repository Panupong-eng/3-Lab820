//37-panupong-Lab820
#include <stdio.h> 
int main() 
{ 
 int num1,a,b,x,y; 
 printf("Please enter number (not more than 9999): "); 
 scanf("%d", &num1); 
 if (num1 > 9999) 
 printf("Your number more than 9999\n"); 
   else 
      { 
 a = num1/1000; 
 b = (num1%1000)/100; 
 x = (num1%100)/10; 
 y = num1%10; 
 printf(" Inverse number is : %d%d%d%d\n", y, x, b, a); 
   }  
   printf("----------End-----------\n"); 
}
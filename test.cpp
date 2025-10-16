#include <stdio.h>
int main(){
    int a, b, result1, result2;
    printf("Input a = ");
    scanf("%d", &a);
    printf("Input b = ");
    scanf("%d", &b);
    result1 = a / b;
    result2 = a % b;
    printf("Result1 = %d\n", result1);
    printf("Result2 = %d\n", result2);
}
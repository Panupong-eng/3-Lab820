//37-panupong-lab820
#include <stdio.h>
int main(){
    char name[100];
    int money, newmoney, b1000, b500, b100, b50, b20, b10, b5, b2, b1;
    printf("Input name = ");
    scanf("%99s", name);
    printf("Input money = ");
    scanf("%d", &money);
    newmoney = money;

    b1000 = newmoney / 1000;
    newmoney = newmoney % 1000;

    b500  = newmoney / 500;
    newmoney = newmoney % 500;

    b100  = newmoney / 100;
    newmoney = newmoney % 100;

    b50   = newmoney / 50;
    newmoney = newmoney % 50;
    b20   = newmoney / 20;
    newmoney = newmoney % 20;

    b10   = newmoney / 10;
    newmoney = newmoney % 10;

    b5    = newmoney / 5;
    newmoney = newmoney % 5;

    b2    = newmoney / 2;
    newmoney = newmoney % 2;

    b1    = newmoney;
    printf("--Output--\n");
    printf("Hello, Khun %s\n", name);
    printf("Your money is %d\n", money);
    printf("1000B = %d\n", b1000);
    printf("500B = %d\n", b500);
    printf("100B = %d\n", b100);
    printf("50B = %d\n", b50);
    printf("20B = %d\n", b20);
    printf("10B = %d\n", b10);
    printf("5B = %d\n", b5);
    printf("2B = %d\n", b2);
    printf("1B = %d\n", b1);
}
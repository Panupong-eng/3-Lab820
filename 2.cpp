//37-panupong-Lab820
#include <stdio.h>
int main(){
    int i=1, n;
    float base, height, area;
    printf("Enter n round=");
    scanf("%d", &n);
    while(i<=n){
        printf("----------Picture %d----------\n", i);
        printf("Input base %d =", i);
        scanf("%f", &base);
        printf("Input height %d =", i);
        scanf("%f", &height);
        area = 0.5 * base * height;
        printf("Area %d = %.2f\n", i, area);
        i++;
    }
}
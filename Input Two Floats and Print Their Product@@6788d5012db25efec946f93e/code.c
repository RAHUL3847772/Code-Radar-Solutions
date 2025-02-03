#include <stdio.h>
int main() {
    float a,b;
    scanf("%f",&a);
    printf("%.2f",a);
    scanf("&f",&b);
    printf("%.2f",b);
    printf("Product: %f",a * b);
    return 0;
}
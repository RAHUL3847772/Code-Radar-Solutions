#include <stdio.h>
int main() {
    float a,b;
    scanf("%f",&a);
    printf("%f",a);
    scanf("&f",&b);
    printf("%f",b);
    printf("Product: %f",a * b);
    return 0;
}
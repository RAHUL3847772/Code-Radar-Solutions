#include <stdio.h>
int main() {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a<b){
        printf("Profit");
    }
    else if(a>b){
        printf("Loss");
    }
    else if(a==b){
        printf("No Profit No Loss");
    }
    else {
        printf("Invalid Input");
    }
    return 0;
}
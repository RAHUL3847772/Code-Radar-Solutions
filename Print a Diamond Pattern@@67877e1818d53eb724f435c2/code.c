#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int spaces=n/2;
    int stars=1;
    int ml=2*n-1;
    for(int i=1;i<=ml;i++){
        for(int j=1;j<=spaces;j++){
            printf(" ");
        }
        for(int k=1;k<=stars;k++){
            printf("*");
        }
        if(i<n){
            spaces--;
            stars+=2;
        }
        else{
            spaces++;
            stars-=2;
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main() {
    int a,b;
    char c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%s",&c);
    if(c='+'){
        printf("%d",a+b);
    }
    else if(c='-'){
        printf("%d",a-b);
    }
    else if(c='*'){
        printf("%d",a*b);
    }
    else if (c='/'){
        printf("%d",a/b);
    }
    else{
        printf("Invalid");
    }
    return 0;
}
#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if(a>='a' && a<='Z'){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    return 0;
}
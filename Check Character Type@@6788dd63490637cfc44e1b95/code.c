#include <stdio.h>
int main() {
    char a;
    scanf("%d",&a);
    if(a='a','e','i','o','u'){
        printf("Vowel");
    }
    else if (a>=0 && a<=100){
        printf("Digit");
    }
    else if (a>'a'&& a<='z' && a!='e','i','0','u'){
        printf("Consonant");
    }
    else{
        printf("Special Character");
    }
    return 0;
}
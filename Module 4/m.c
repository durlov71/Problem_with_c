#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a>=48 && a<=57){
        printf("IS DIGIT");
    }else{
        printf("ALPHA\n");
        if(a>=97 && a<=123){
            printf("IS SMALL");
        }else{
            printf("IS CAPITAL");
        }
    }
    return 0;
}
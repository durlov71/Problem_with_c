#include<stdio.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a, b);
    int v=strcmp(a,b);
    if(v<0){
        printf("%s",a);
    }else{
        printf("%s",b);
    }
    return 0;
}
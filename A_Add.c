#include<stdio.h>

int sum(int a,int b){
    printf("%d",a+b);
    return;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    sum(a,b);
    return 0;
}
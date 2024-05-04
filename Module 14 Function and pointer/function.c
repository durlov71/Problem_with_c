#include<stdio.h>
int sum(int x,int y){
    int sum=x+y;
    return sum;
}
int main()
{
    printf("%d",sum(10,20));
    return 0;
}
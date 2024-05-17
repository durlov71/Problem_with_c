#include<stdio.h>
int fun(int x){
   for(int i=1;i<x;i++){
    printf("%d ",i);
   }
   printf("%d",x);
}
int main()
{   
    int n;
    scanf("%d",&n);
    fun(n);
    return 0;
}
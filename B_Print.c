#include<stdio.h>
int fun(int n){
   int i=1;
   while(i<=n){
    printf("%d ",i);
    i++;
   }
}
int main()
{
    fun(5);
    return 0;
}
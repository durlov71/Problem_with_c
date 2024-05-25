#include<stdio.h>

void fun (int i,int a[],int n){
    if(i==n) return;
    fun(i+1,a,n);
    if(i%2==0){
        printf("%d ",a[i]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    fun(0,a,n);
    return 0;
}
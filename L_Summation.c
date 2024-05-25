#include<stdio.h>

long long fun (int i,int a[],int n){
    if(i<0){
        return 0;
    } 
    else {
       return a[i]+fun(i-1,a,n);
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
    long long sum=fun(n-1,a,n);
    printf("%lld",sum);
    return 0;
}
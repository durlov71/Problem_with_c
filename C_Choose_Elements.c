#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    long long int a[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    int temp=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    long long int sum=0;
    for(int i=0;i<k;i++){
        sum=sum+a[i];
    }
    printf("%lld",sum);
    return 0;
}
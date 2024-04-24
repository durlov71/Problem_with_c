#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int sum=0, n_sum=0;
    for(int i=0;i<n;i++){
        if(ar[i]>0){
            sum=sum+ar[i];
        }else if(ar[i]<0){
            n_sum=n_sum+ar[i];

        }
    }
    printf("%d %d",sum,n_sum);
    return 0;
}
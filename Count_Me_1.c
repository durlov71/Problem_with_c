#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n;i++){
        scanf("%d",&a[i]);
    }
    int count=0;
    int count1=0;
    for(int i=0; i<n;i++){
        if(a[i]%2==0){
            count++;
        }
        else if(a[i]%3==0){
            count1++;
        }
    }
    printf("%d %d",count,count1);
    return 0;
}
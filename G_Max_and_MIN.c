#include<stdio.h>
#include<limits.h>
void max(int a[],int n){
    int max=INT_MIN;
    for( int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("%d",max);
}
void min(int a[],int n){
    int min=INT_MAX;
    for( int i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("%d ",min);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for( int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    min(a,n);
    max(a,n);
    return 0;
}
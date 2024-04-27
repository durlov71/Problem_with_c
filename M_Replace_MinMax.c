#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=0;
     int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    int max_temp=0;
    for(int i=0;i<n;i++){
        if(a[i]==max){
            max_temp=i;
        }
    }
    int min_temp;
    for(int i=0;i<n;i++){
        if(a[i]==min){
            min_temp=i;
        }
    }
    int temp=0;
    temp=a[max_temp];
    a[max_temp]=a[min_temp];
    a[min_temp]=temp;
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
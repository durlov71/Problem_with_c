#include<stdio.h>
int count_odd(int ar[],int x){
    int count=0;
    for(int i=0;i<x;i++){
        if(ar[i]%2==1){
            count++;
        }
    }
    return count;
}
int main()
{
    int ar[5]={1,5,3,10,2};
    int count=count_odd(ar,5);
    printf("%d",count);
    return 0;
}
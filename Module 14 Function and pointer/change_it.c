#include<stdio.h>
void change_it(int ar[], int x){
    for(int i=0;i<x;i++){
        if(i==x-1){
            ar[i]=100;
        }
    }
}
int main()
{
    int ar[5]={10,20,30,40,50};
    int a[3]={1,2,3};
    change_it(ar,5);
    change_it(a,3);
    for(int i=0;i<5;i++){
        printf("%d ",ar[i]);
    }
    printf("\n");
    for(int i=0;i<3;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
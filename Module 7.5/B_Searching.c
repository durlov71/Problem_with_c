#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n;i++){
     scanf("%d",&ar[i]);
    }
    scanf("%d",&a);
    int count =0;
    for(int i=0; i<n;i++){
     if(ar[i]==a){ 
        printf("%d",i);
        count++;
        break;
     }
    }
    if(count<=0){
        printf("-1");
    }
    return 0;
}
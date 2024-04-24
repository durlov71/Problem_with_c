#include<stdio.h>
int main()
{
   int x;
   scanf("%d",&x);
   for(int d=1; d<=x; d++){
     int n;
     scanf("%d",&n);
     do{
        printf("%d ",n%10);
        n=n/10;
    }while(n !=0);
    printf("\n");
   }
    return 0;
}
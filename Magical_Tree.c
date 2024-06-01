#include<stdio.h>
int main()
{
    
    int n,s,k;
    scanf("%d",&n);
    s=(n+11)/2;
    k=1;
    for(int i=1;i<=(n+11)/2;i++){
        for(int j=1;j<s;j++){
            printf(" ");
        }
        for(int j=1;j<=k;j++){
            printf("*");
        }
        s--;
        k=k+2;
        printf("\n");
        
    }
    s=5;
    k=n;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=s;j++){
            printf(" ");
        }
        for(int j=1;j<=k;j++){
            printf("*");
        }
        printf("\n");
        
    }
    return 0;
}
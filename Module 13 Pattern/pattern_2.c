#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=n-1, k=n*2-1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=s;j++){
            printf(" ");
        }
        for(int l=1;l<=k;l++){
            printf("*");
        }
        s++;
        k=k-2;
        printf("\n");
    }
    return 0;
}
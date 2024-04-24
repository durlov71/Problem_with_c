#include<stdio.h>
int main()
{
    // int ar[3];
    // ar[0]=100;
    // ar[1]=200;
    // ar[2]=400;
    // printf(" %d %d %d",ar[0],ar[1],ar[2]);

    int ar[10];
    for(int i=0;i<10;i++){
        scanf("%d ",&ar[i]);
    }
    for(int i=0; i<10;i++){
        printf("%d\n",ar[i]);
    }
    return 0;
}
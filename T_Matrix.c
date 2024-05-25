#include<stdio.h>
#include<stdlib.h>
int main()
{
    int row;
    scanf("%d",&row);
    int a[row][row];
    for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int x=0;
    int y=0;
    for(int i=0;i<row;i++){
        x=x+a[i][i];
        y=y+a[i][row-i-1];
    }
    int diff=abs(x-y);
    printf("%d",diff);
    return 0;
}
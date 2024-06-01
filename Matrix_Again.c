#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int last_row=row-1;
    for(int j=0;j<col;j++){
            printf("%d ",a[last_row][j]);
    }
    printf("\n");
    int last_col=col-1;
    for(int i=0;i<row;i++){
            printf("%d ",a[i][last_col]);
    }
    
    return 0;
}
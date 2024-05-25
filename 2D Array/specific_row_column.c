#include<stdio.h>
int main()
{
    int row, col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d ",&a[i][j]);
        }
    }
    // full array print
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         printf("%d ",a[i][j]);
    //     }
    //     printf("\n");
    // }

    // exact row print
    // int exact_row_print;
    // scanf("%d",&exact_row_print);
    // for(int j=0;j<col;j++){
    //         printf("%d ",a[exact_row_print][j]);
    //     }
// exact col print
    int exact_col_print;
    scanf("%d",&exact_col_print);
    for(int j=0;j<col;j++){
            printf("%d ",a[][j]);
        }
    return 0;
}
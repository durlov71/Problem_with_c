#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    int element= row*col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int x;
    scanf("%d",&x);
    int flag=1;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(a[i][j]==x){
                flag=0;
            }
        }
    }
    if(flag==1){
        printf("will take number");
    }else{
        printf("will not take number");
    }
    return 0;
}
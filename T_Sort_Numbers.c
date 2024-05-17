#include<stdio.h>
int main()
{
    int ar[3];
    for(int i=0;i<3;i++){
        scanf("%d",&ar[i]);
    }
    int A=ar[0],B=ar[1],C=ar[2];
    int temp;
    for(int i=0;i<2;i++){
        for(int j=i+1;j<3;j++){
            if(ar[i]>ar[j]){
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }
    for(int i=0;i<3;i++){
        printf("%d\n",ar[i]);
    }
    printf("\n");
    printf("%d\n%d\n%d",A,B,C);
    return 0;
}
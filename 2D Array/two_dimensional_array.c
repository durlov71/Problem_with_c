#include<stdio.h>
int main()
{
    // declade two dimension array
    int a[5][4];
    for(int i=0; i<5;i++)
    {
        for(int j=0;j<4; j++)
        {
           printf(" %d%d",i,j); 
        }
        printf ("\n");
    }
    return 0;
}
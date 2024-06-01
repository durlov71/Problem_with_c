#include<stdio.h>
int main()
{
    int x,p;
    scanf("%d %d",&x,&p);
    float res= 1-(x/100.0);
    float ans=(p/res);
    printf("%.2f",ans);
    return 0;
}
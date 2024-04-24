#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a, even=0, odd=0, neg=0,pos=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        if(a%2==0){
            //even
            even++;
        }else{
            //odd
            odd++;
        }
        if(a<0){
            //negative
            neg++;
        }else if(a>0){
            //positive
            pos++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",even,odd,pos,neg);
    return 0;
}
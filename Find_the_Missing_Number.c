#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        long long int M,A,B,C;
    scanf("%lld%lld%lld%lld",&M,&A,&B,&C);
    long long int product= A*B*C;
    if(M%product==0){
        long long int number=M/product;
        printf("%lld\n",number);
    }else{
        printf("-1\n");
    }
    }
    return 0;
}
#include<stdio.h>
int my_abs(int x){
    if(x<0){
        x=x*(-1);
    }
    return x;

}
int main()
{
    int d=my_abs(-8);
    printf("%d",d);
    return 0;
}
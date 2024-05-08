#include<stdio.h>

char captial_to_small(char x){
    x=x+32;
    return x;
}
int main()
{
    char cap;
    scanf("%c",&cap);
    printf("%c",captial_to_small(cap));
    return 0;
}
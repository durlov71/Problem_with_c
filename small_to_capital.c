#include<stdio.h>

char small_to_char(char x){
    x=x-32;
    return x;
}
int main()
{
    char small;
    scanf("%c",&small);
    printf("%c",small_to_char(small));
    return 0;
}
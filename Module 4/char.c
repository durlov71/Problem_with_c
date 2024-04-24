#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a>=97 && a<=122)
    {
        int value = a-32;
        printf("%c",value);
    }
    else if(a>=65 && a<=90)
    {
        int value =a+32;
        printf("%c",value);
    }
    return 0;
}
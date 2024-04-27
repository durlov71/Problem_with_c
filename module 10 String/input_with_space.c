#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    // gets(a);
    // printf("%s",a);
    fgets(a,13,stdin);
    printf("%s",a);
    return 0;
}
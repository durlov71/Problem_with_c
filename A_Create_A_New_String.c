#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    char t[1001];
    scanf("%s %s",s,t);
    int str1=strlen(s);
    int str2=strlen(t);
    printf("%d %d\n",str1,str2);
    printf("%s %s",s,t);

    return 0;
}
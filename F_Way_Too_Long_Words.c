#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    char s[101];
    scanf("%s",s);
    if(strlen(s)>10){
        int count=0;
        for(int i=1;i<strlen(s);i++){
            count++;
        }
        printf("%c%d%c\n",s[0],count-1,s[count]);
    }else{
        printf("%s\n",s);
    }
    }
    return 0;
}
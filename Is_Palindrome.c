#include<stdio.h>
#include<string.h>

int is_palindrome(char *s){
    int len=strlen(s);
    for(int i=0;i<len/2;i++){
        if(s[i] != s[len-1-i]){
            return 0;
        }
    }
    return 1;
}
int main()
{
    char s[1001];
    scanf("%s",s);
    int check= is_palindrome(s);
    if(check>0){
        printf("Palindrome\n");
    }else{
        printf("Not Palindrome\n");
    }
    return 0;
}
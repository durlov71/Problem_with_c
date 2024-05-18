#include<stdio.h>
int string_len(char a[],int i){
    if(a[i]=='\0') return 0;
    int len=string_len(a,i+1);
    return len+1;
}
int main()
{
    char a[10]="Apple";
    int len=string_len(a,0);
    printf("%d",len);
    return 0;
}
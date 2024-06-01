#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001],b[1001];
    scanf("%s",a);
    strcpy(b,a);
    int j=strlen(b)-1;
    int i=0;
    while(i<j){
        // if(a[i]!=a[j]){
        //     count=0;
        // }
        char tmp=b[i];
        b[i]=b[j];
        b[j]=tmp;
        i++;
        j--;
    }
    if(strcmp(a,b)==0){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}
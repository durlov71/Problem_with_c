#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    scanf("%s",a);
    int count=1;
    int j=strlen(a)-1;
    int i=0;
    while(i<j){
        if(a[i]!=a[j]){
            count=0;
        }
        i++;
        j--;
    }
    if(count==1){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}
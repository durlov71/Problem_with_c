#include<stdio.h>
#include<string.h>
int main()
{
    char a [100];
    scanf("%s",a);
    int count=0;
    //string length counting for loop
    // for(int i=0;a[i]!='\0';i++){ 
    //     count++;
    // }

    // count with string
    // int i=0;
    // while(a[i]!='\0'){
    //     count++;
    //     i++;
    // }
    // printf("%d",count);


    int str= strlen(a);
    printf("%d",str);
    return 0;
}
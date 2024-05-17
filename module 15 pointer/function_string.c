// #include<stdio.h>
// #include<string.h>
// void fun(char ar[]){
//     printf("%d",strlen(ar));
// }
// int main()
// {
//     char ar[20]="Hello";
//     fun(ar);
//     return 0;
// }
#include <stdio.h>
int main()
{

    int ary[4] = {1, 2, 3, 4};

    int *p;

    p = ary + 3;

    *p = 5;
    for(int i=0;i<4;i++){
        printf("%d\n", ary[i]);
    }

}
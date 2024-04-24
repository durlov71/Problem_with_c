#include<stdio.h>
int main()
{
    char a [6];
    for(int i=0;i<sizeof(a);i++){
        scanf("%c",&a[i]);
    }
    for(int i=0; i<sizeof(a); i++){
        printf("%c\n",a[i]);
    }
    printf("%d",sizeof(a));
    return 0;
    
}
// Array Size= sizeof(a);
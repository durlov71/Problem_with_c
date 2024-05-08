#include<stdio.h>
int main()
{
    int y=50;
    int *ptr= &y;
    printf("x er address - %p\n",&y);
    printf("ptr er address - %p\n",ptr);
    printf("ptr er address - %p\n",&ptr);
    printf("ptr er size - %d\n",sizeof(ptr));
    return 0;
}
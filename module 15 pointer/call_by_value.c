#include<stdio.h>

// this is  -> call by value or pass by value

void fun(int x){
    x=300;
    printf("fun er x er address %p\n",&x);
    printf(" fun er x er value %d\n",x);

}
int main()
{
    int x=10;
    printf("main er x er address %p\n",&x);
    fun(x);
    printf("main er x er value %d",x);

    return 0;
}
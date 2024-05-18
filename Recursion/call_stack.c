#include<stdio.h>

void hello(){
    printf("Hello\n");
    world();
}
void world(){
    printf("world\n");
}

int main()
{
    hello();
    printf("End\n");
    return 0;
}
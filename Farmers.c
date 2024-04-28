#include<stdio.h>
int main()
{   
    int n;
    scanf("%d",&n);
    for(int i= 0; i<n;i++){
        int a[3];
    for(int i=0;i<3;i++){
        scanf("%d",&a[i]);
    }
    int ans;
    ans=(a[0]*a[2])/(a[0]+a[1]);
    int final=a[2]-ans;
    printf("%d\n",final);
    }
    return 0;
}
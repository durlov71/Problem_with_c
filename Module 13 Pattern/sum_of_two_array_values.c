#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    int count=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==x){
                count++;
            }
        }
    }
    if(count>0){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int cnt[7]={0};
    for(int i=0;i<n;i++){
        int val=a[i];
        cnt[val]++;
    }
    for(int i=0;i<=6;i++){
        printf("%d = %d\n",i,cnt[i]);
    }
    // printf("0 = %d\n",cnt[0]);
    // printf("1 = %d\n",cnt[1]);
    // printf("2 = %d\n",cnt[2]);
    // int zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;
    // for(int i=0;i<n;i++){
    //     if(a[i]==0){
    //         zero++;
    //     }
    //     if(a[i]==1){
    //         one++;
    //     }
    //     if(a[i]==2){
    //         two++;
    //     }
    //     if(a[i]==3){
    //         three++;
    //     }
    //     if(a[i]==4){
    //         four++;
    //     }
    //     if(a[i]==5){
    //         five++;
    //     }
    //     if(a[i]==6){
    //         six++;
    //     }
    //     if(a[i]==7){
    //         seven++;
    //     }
    //     if(a[i]==8){
    //         eight++;
    //     }
    //     if(a[i]==9){
    //         nine++;
    //     }

    // }
    // printf("0 - %d\n",zero);
    // printf("1 - %d\n",one);
    // printf("2 - %d\n",two);
    // printf("3 - %d\n",three);
    // printf("4 - %d\n",four);
    // printf("5 - %d\n",five);
    // printf("6 - %d\n",six);
    // printf("7 - %d\n",seven);
    // printf("8 - %d\n",eight);
    // printf("9 - %d\n",nine);
    return 0;
}
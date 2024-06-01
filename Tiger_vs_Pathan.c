#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int n;
    scanf("%d",&n);
    char s[n];
    scanf("%s",&s);
    int c_t=0, c_p=0;
    int i=0;
    while(s[i] !='\0'){
        if(s[i]=='T'){
            c_t++;
        }else{
            c_p++;
        }
        i++;
    }
    if(c_t>c_p){
        printf("Tiger\n");
    }else if(c_p>c_t){
        printf("Pathaan\n");
    }else{
        printf("Draw\n");
    }
    }
    return 0;
}
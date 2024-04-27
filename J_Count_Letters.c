#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",s);
    char temp;
    int i, j;
    int n = strlen(s);
    for (i = 0; i < n-1; i++) {
      for (j = i+1; j < n; j++) {
         if (s[i] > s[j]) {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
         }
      }
    }
    int cnt[26]={0};
    for(int i=0;i<strlen(s);i++){
        int val=s[i]-'a';
        cnt[val]++;
    }
    for(int i=0;i<strlen(s);i++){
        int val=s[i]-97;
        if(cnt[val]!=0){
            printf("%c : %d\n",val+'a',cnt[val]);
        }
        cnt[val]=0;
    }
    return 0;
}

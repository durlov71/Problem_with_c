#include<stdio.h>
#include<string.h>
int main()
{
    char s[100001];
    scanf("%s",s);
    int vowel=0;
    int consonant=0;
    for (int i = 0; s[i] != '\0'; ++i){
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
        s[i] == 'o' || s[i] == 'u'){
            vowel++;
        }
    else if (s[i] >= 'a' && s[i] <= 'z'){
        consonant++;
    }

    }
    printf("%d",consonant);
    return 0;
}
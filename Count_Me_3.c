#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    for(int i=1;i<=T;i++){
        char S[10001];
        int uppercase = 0, lowercase = 0, digits = 0, i;

        scanf("%s", S); 

        for (i = 0; i < strlen(S); i++) {
            if (S[i] >= 'A' && S[i] <= 'Z')
                uppercase++;
            else if (S[i] >= 'a' && S[i] <= 'z')
                lowercase++;
            else if (S[i] >= '0' && S[i] <= '9')
                digits++;
        }

        printf("%d %d %d\n", uppercase, lowercase, digits); 
    }

    return 0;
}
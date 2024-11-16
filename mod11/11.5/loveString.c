#include<stdio.h>
#include<string.h>

int main(){

    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        char S[51], T[51];
        scanf("%s %s", S, T);

        int len1 = strlen(S);
        int len2 = strlen(T);

        int minlen = len1;
        if (len2 < minlen)
        {
            minlen = len2;
        }

        for (int j = 0; j < minlen; j++)
        {
            printf("%c%c",S[j],T[j]);
        }

        if (len1 < len2)
        {
            for (int j = len1; j < len2; j++)
            {
                printf("%c", T[j]);
            }
            
        }
        if (len1 > len2)
        {
            for (int j = len2; j < len1; j++)
            {
                printf("%c", S[j]);
            }
            
        }
        printf("\n");
    }
    

    return 0;
}
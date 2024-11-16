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

        int maxlen = (len1 > len2)?len1:len2;

        for (int j = 0; j < maxlen; j++)
        {
            if (j<len1)printf("%c",S[j]);
            if (j<len2)printf("%c",T[j]);
        }
        printf("\n");
    }
    

    return 0;
}
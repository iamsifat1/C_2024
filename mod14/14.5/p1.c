#include<stdio.h>
#include<string.h>

int main(){

    int N;
    scanf("%d", &N);

    char S[N];
    scanf("%s", S);
    int len = strlen(S);

    int f[26] = {0};

    for (int  i = 0; i < len; i++)
    {
        int index = S[i] - 'a';
        f[index] = 1;
    }
    for (int i = 0; i < 26; i++)
    {
        if (f[i] == 1)
        {
            printf("%c", 'a'+i);
        }
        
    }
    
    return 0;
}
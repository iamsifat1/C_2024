#include<stdio.h>
#include<string.h>

char S[10000001];
int main(){

    
    fgets(S, sizeof(S), stdin);
    int len = strlen(S);


    int f[26] = {0};

    for (int i = 0; i < len; i++)
    {
            int index = S[i] - 'a';
            f[index] += 1;
        
    }
    for (int i = 0; i < 26; i++)
    {
        if (f[i] != 0)
        {
            printf("%c : %d\n", 'a'+i, f[i]);
        }
        
    }
    
    return 0;
}
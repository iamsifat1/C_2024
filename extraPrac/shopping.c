#include<stdio.h>
#include<string.h>



int main(){
    char S[100005];
    scanf("%s", S);
    int len = strlen(S);
    char vow[5] = "aeiou";

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (S[i] == vow[j])
            {
                len--;
            }
            
        }
        
    }
    
    printf("%d", len);
    return 0;
}
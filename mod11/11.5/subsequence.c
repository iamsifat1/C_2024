#include<stdio.h>
#include<string.h>


int main(){

    char S[10010];
    scanf("%s", S);
    char T[6] = "hello";
    
    int len = strlen(S);
    int sub = 0, j =0;
    
    for (int i = 0; i < len; i++)
    {
        if (S[i] == T[j])
        {
            
            j++;
        }
        
    }
    if (j == 5)
    {
        printf("YES\n");
    }else
    {
        printf("NO\n");
    }
    
    
    return 0;
}
#include<stdio.h>

int main(){
    char S[100000];
    scanf("%s", S);
    for (int i = 0; S[i] != '\0'; i++)
    {
        if (S[i]>='a' && S[i]<= 'z')
        {
            printf("%c", S[i]-32);
        }else if (S[i]>= 'A' && S[i] <= 'Z')
        {
            printf("%c", S[i]+32);
        }else if (S[i] == ',')
        {
            printf(" ");
        }
        
        
    }
    
    return 0;
}
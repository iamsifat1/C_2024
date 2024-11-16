#include<stdio.h>
#include<string.h>

int main(){

    char S[1000000];
    scanf("%s", S);

    int lengtn = strlen(S);

    int sum = 0;

    for (int i = 0; i < lengtn; i++)
    {
        int digit = S[i] - '0';
        sum += digit;
    }
    printf("%d", sum);
    

    return 0;
}
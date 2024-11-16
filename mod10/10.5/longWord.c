#include<stdio.h>

int main(){
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        char S[100];
        scanf("%s", S);
        int length = 0;
        for (int i = 0; i < 100; i++)
        {
            if (S[i] == '\0')
            {
                break;
            }
            length++;
        }
        
        if (length > 10)
        {
            printf("%c%d%c\n", S[0], length-2, S[length-1]);
        }
        else{
            printf("%s\n", S);
        }
    }
    
    return 0;
}
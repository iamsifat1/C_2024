#include <stdio.h>
#include<string.h>


int is_palindrome(char *a){
    int len = strlen(a);
    int pal = 1;

    for (int i = 0, j = len-1; i < j; i++, j--)
    {
        if (a[i] != a[j])
        {
            pal = 0;
        }
        
    }
    return pal;
}
int main()
{
    char S[1005];
    scanf("%s", S);

    int res = is_palindrome(S);

    if (res == 1)
    {
        printf("Palindrome\n");
    }else{
        printf("Not Palindrome\n");
    }
    
    return 0;
}
#include<stdio.h>
#include<string.h>

int main(){

    char S[210], T[210];
    scanf("%s %s", S, T);

    int len1 = strlen(S);
    int len2 = strlen(T);

    int maxlen = (len1 > len2)? len1:len2;
    
    // int compare = strcmp(S, T);

    // if (compare <= 0)
    // {
    //     printf("%s", S);
    // }else{
    //     printf("%s", T);
    //}
    
    // for (int i = 0; i < count; i++)
    // {
    //     /* code */
    // }
    
    
    return 0;
}
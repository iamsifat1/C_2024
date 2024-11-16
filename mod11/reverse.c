#include<stdio.h>
#include<string.h>

int main(){

    char str[10] = "abcde";

    // int len = strlen(str);

    // for (int i = 0, j = len-1; i < j; i++, j--)
    // {
    //     char temp = str[i];
    //     str[i] = str[j];
    //     str[j] = temp;
    // }
    //printf("%s", str);

    strrev(str); // doesn't work
    return 0;
}
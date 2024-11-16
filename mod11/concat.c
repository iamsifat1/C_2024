#include<stdio.h>
#include<string.h>

int main(){

    char a[20] = "Sifat";
    char b[20] = "Hossain";

    // int len_a = strlen(a);
    // int len_b = strlen(b);

    // int length = len_a + len_b;

    // for (int i = len_a, j = 0; i < length; i++, j++)
    // {
    //     a[i] = b[j];
    // }
    // a[length] = '\0';

    // printf("%s", a);

    strcat(a,b);
    printf("%s", a);
    return 0;
}
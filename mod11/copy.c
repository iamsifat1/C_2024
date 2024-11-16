#include<stdio.h>
#include<string.h>

int main(){

    char a[10] = "dfg";
    char b[10] = "abcdef";
    // int length = strlen(b);

    // for (int i = 0; i < length; i++)
    // {
    //     a[i] = b[i];
    // }
    // a[length] = '\0';
    printf("%s %s\n", a,b);
    strcpy(a, b); // copy b from a . a is destination b is source
    printf("%s %s\n", a,b);

    char x[10];
    strcpy(x, "sifat");
    printf("%s", x);
    return 0;
}
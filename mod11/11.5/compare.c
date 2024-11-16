#include<stdio.h>
#include<string.h>

int main(){

    char X[21], Y[21];
    scanf("%20s %20s", X, Y);
    int com = strcmp(X,Y);

    if (com <= 0)
    {
        fputs(X, stdout);
    }else{
        fputs(Y, stdout);
    }
    
    return 0;
}
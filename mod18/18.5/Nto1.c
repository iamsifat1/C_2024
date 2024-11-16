#include<stdio.h>

void prnt(int n){
    if (n > 0)
    {
        printf("%d", n);
        if (n > 1)
        {
            printf(" ");
        }
        
        prnt(n-1);
    }
    else{
        return;
    }
}

int main(){
    int n;
    scanf("%d", &n);
    prnt(n);
    return 0;
}
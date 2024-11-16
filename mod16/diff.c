#include<stdio.h>

int main(){
    int a , b;
    scanf("%d %d", &a, &b);

    int x = a - b;

    if (x < 0)
    {
        printf("%d", (-1)*x);
    }else{
        printf("%d", x);
    }
    
    return 0;
}
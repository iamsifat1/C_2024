#include<stdio.h>


void prnt(int x, int n){
    
    if (x > n)
    {
        return;
    }
    
    printf("%d\n", x);
    printf("Before function call, current x = %d\n", x);
    prnt(x+1, n);
    printf("After function call, current x = %d\n", x);
    
}

int main(){
    int n;
    scanf("%d", &n);
    printf("Before function call main\n");
    prnt(1 , n);
    printf("After function call main\n");
}
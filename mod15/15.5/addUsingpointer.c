#include<stdio.h>

int fun();

int main(){

    int x, y;
    scanf("%d %d", &x, &y);

    int *a = &x, *b = &y;

    fun(*a , *b);
    return 0;
}

int fun(int p,int q){
    int sum = p + q;
    printf("%d", sum);
}
#include<stdio.h>

int fun(int p, int q);

int main(){

    int x, y;
    scanf("%d %d", &x, &y);

    int *a = &x, *b = &y;
    fun(*a, *b);
    return 0;
}

int fun(int p, int q){
    int temp = p;
    p = q;
    q =temp;

    printf("%d %d", p, q);
}
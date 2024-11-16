#include<stdio.h>


// Return + no parameter

int add(){
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    return sum;
}


int main(){

    printf("%d", add());
    return 0;
}
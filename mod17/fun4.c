#include<stdio.h>

// no parameter + no return

int add(){
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    printf("%d\n", sum);
    return sum;
}

void mul(int x, int y){
    printf("%d", x * y);
}
int main(){
    add();
    mul(add(), 10); //it will work when add function will be out of void
}
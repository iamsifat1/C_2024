#include<stdio.h>

void swap(int *x, int *y){
    printf("Address swap: %p %p\n", x, y);
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int a = 5, b = 6;
    printf("Address main: %p %p\n", &a, &b);
    swap(&a, &b);
    printf("%d %d\n", a, b);
}
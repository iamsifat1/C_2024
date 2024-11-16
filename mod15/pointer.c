#include<stdio.h>

int main(){

    int a = 5;
    int *b = &a;

    printf("%d\n", &a);
    printf("%d\n", b);

    printf("%d\n", a);
    printf("%d\n", *b);

    *b = 7;
    printf("%d\n", *b);
    printf("%d\n", a);

    // swaping value
    printf("swap\n");
    int c = 5, d = 6;
    int *x = &c, *y = &d;

    printf("%d %d\n", c, d);

    int temp = *x;
    *x = *y;
    *y = temp;
    printf("%d %d\n", c, d);

    return 0;
}
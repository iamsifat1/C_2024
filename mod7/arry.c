#include<stdio.h>

int main(){
    int a[10];

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", a[i]);
        printf("Address:%d", &a[i]);
        printf("\n");
    }
    return 0;
    
}
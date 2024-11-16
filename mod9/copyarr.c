#include<stdio.h>


int a[100], b[100];


int main(){

    int length1, length2;
    scanf("%d", &length1);

    for (int i = 0; i < length1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Befor copy:\n");
    for (int i = 0; i < length1; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = 0; i < length1; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");
    for (int i = 0; i < length1; i++)
    {
        b[i] = a[i];
    }
    
    printf("After copy:\n");
    for (int i = 0; i < length1; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = 0; i < length1; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}
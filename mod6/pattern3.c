#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int space = n-1;
    int star = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space--;
        for (int k = 1; k <= star; k++)
        {
            printf("*");
        }
        star += 2;
        printf("\n");
    }
    
    printf("\n");
    int space2 = 0;
    int star2 = (2*n -1);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space2; j++)
        {
            printf(" ");
        }
        space2++;
        for (int k = 1; k <= star2; k++)
        {
            printf("*");
        }
        star2 -= 2;
        printf("\n");
    }
    return 0;
}
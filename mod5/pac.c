#include<stdio.h>

int main(){
    int n;
    printf("Enter number:");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("Even\n");
    }else{
        printf("Odd\n");
    }

    if (n>=0)
    {
        printf("Positive\n");
    }else{
        printf("Negetive\n");
    }
    
    
}
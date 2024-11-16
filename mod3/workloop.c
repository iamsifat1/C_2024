#include<stdio.h>

int main(){
    int n = 25;
    for (int i = 'a'; i <= 'z'; i++)
    {
        printf("%c \t", i);
    }
    printf("\n");

    for(int i ='Z';i>='A';i--){
        printf("%c \t", i);
    }
    int n = 10, sum = 0;
    for (int i=1; i <=n; i++)
    {
        printf("%d + %d = ",sum,i);
        sum += i;
        printf("%d\n", sum);
        
    }
    printf("sum is %d", sum);

    int mul =1;

    for (int i = 1; i <= 5; i++)
    {
        mul *=i;
    }
    printf("%d", mul);

    
    
}
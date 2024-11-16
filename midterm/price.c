#include<stdio.h>

int main(){

    int N, X, Y, phn = 0;
    scanf("%d %d %d", &N, &X, &Y);

    for (int i = 0; i < N; i++)
    {
        int a;
        scanf("%d", &a);

        if (a>=X && a<= Y)
        {
            phn++;
        }
        
    }
    printf("%d", phn);
    
    return 0;
}
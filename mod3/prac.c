#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        if (i % 3 ==0 || i%5 ==0)
        {
            printf("%d Yes",i);
        }else{
            printf("%d No",i);
        }
        
    }
    
    return 0;
}
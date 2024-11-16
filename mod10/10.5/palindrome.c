#include<stdio.h>

int main(){
    int N, pal = 1;
    scanf("%d", &N);

    int A[N];
    int i =0;
    while (i<N)
    {
        scanf("%d", &A[i]);
        i++;
    }
    for (int i = 0, j = N-1; i < j; i++, j--)
    {
        if (A[i] != A[j])
        {
            pal = 0;
            break;
        }
        
    }
    if (pal == 1)
    {
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    
    
    return 0;
}
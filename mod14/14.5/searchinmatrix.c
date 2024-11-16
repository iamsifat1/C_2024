#include<stdio.h>

int main(){

    int N, M;
    scanf("%d %d", &N, &M);

    int mat[N][M];
    if (N>=2 && M >=1)
    {
        for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &mat[i][j]);
        }
        
    }
    }
    
    int X;
    scanf("%d", &X);

    int present =0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (mat[i][j] == X)
            {
                printf("will not take number\n");
                present = 1;
                break;
            }
            
        }
        if (present == 1)
        {
            break;
        }
        
    }
    if (present == 0)
    {
        printf("will take number\n");
    }
    
    return 0;
}
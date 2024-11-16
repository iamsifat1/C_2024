#include<stdio.h>


int main(){
    int N, unit = 1;
    scanf("%d", &N);

    int mat[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &mat[i][j]);
        }
        
    }
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j && mat[i][j] == 1)
                {
                    unit = 1;
                }

            if (mat[i][j] != 0 && i != j)
            {
                unit = 0;
                break;
            }
            
        }
        if (unit == 0)
        {
            break;
        }
        
    }
    if (unit == 1)
    {
        printf("YES\n");
    }else {
        printf("NO\n");
    }
    
    
    return 0;
}
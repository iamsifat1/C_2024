#include<stdio.h>



int main(){

    int n ,m;
    scanf("%d %d", &n, &m);

    int mat[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &mat[i][j]);
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        int temp = mat[i][0];
        mat[i][0] = mat[i][m-1];
        mat[i][m-1] = temp;
    }


    for (int j = 0; j < m; j++)
    {
        int temp = mat[0][j];
        mat[0][j] = mat[n-1][j];
        mat[n-1][j] = temp;
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
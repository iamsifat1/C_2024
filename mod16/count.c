#include<stdio.h>

int main(){
    int n, m, x;
    scanf("%d %d %d", &n, &m, &x);

    int M[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &M[i][j]);
        }
        
    }
    int f[x];
    for (int i = 0; i < x; i++)
    {
        int y;
        scanf("%d", &f[i]);
    }
    
    int freequency[101] = {0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            freequency[M[i][j]]  += 1;
        }
        
    }
    
    for (int i = 0; i < x; i++)
    {
        printf("%d\n", freequency[f[i]]);
    }
    

    return 0;

}
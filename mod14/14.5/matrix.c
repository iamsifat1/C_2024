#include<stdio.h>
#include<stdlib.h>

int main(){

    int n;
    scanf("%d", &n);

    int A[n][n];
    int fr_dia = 0, sec_dia =0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
            
            if (i==j)
            {
                fr_dia += A[i][j];
            }
            if (i+j == n-1)
            {
                sec_dia += A[i][j];
            }
            
        }
        
    }
    
    int dif = abs(fr_dia - sec_dia);
    printf("%d\n", dif);
    
    return 0;
}
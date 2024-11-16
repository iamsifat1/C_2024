#include<stdio.h>
#include<string.h>

int main(){

    char A[1001], B[1001], C[1001];
    scanf("%s %s %s", &A, &B, &C);

    if (strcmp(A,B) <= 0 && strcmp(A,C)<= 0 )
    {
        printf("%s\n", A);
        if (strcmp(B,C) > 0)
        {
            printf("%s\n", B);
        }else{
            printf("%s\n", C);
        }
    }else if (strcmp(B,A) <= 0 && strcmp(B,C) <= 0)
    {
        printf("%s\n", B);
        if (strcmp(A,C) > 0)
        {
            printf("%s\n", A);
        }else{
            printf("%s\n", C);
        }
        
    }else{
        printf("%s\n", C);
        if (strcmp(A,B) > 0)
        {
            printf("%s\n", A);
        }else{
            printf("%s\n", B);
        }
    }
    
    return 0;
}

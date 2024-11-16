#include<stdio.h>
#include<string.h>

int main(){
    char A[11], B[11];
    scanf("%s %s", A, B);

    int len1 = strlen(A);
    int len2 = strlen(B);
    printf("%d %d\n",len1, len2);

    char concat[22] ;
    strcpy(concat, A);
    strcat(concat, B);
    printf("%s\n", concat);

    char temp = A[0];
    A[0] = B[0];
    B[0] = temp;
    
    printf("%s %s\n",A, B);

    return 0;
}
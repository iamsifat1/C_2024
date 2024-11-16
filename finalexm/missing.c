#include<stdio.h>


int main(){

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int m ,a, b, c;
        scanf("%d %d %d %d", &m, &a, &b, &c);

        int x = m/(a*b*c);

        if (m%(a*b*c) != 0)
        {
            printf("-1\n");
        }else{
            printf("%d\n", x);
        }
        
    }
    
    return 0;

}
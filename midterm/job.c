#include<stdio.h>

int main(){

    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int x;
        scanf("%d",&x);

        if (x < 1)
        {
            printf("Entry-level candidate\n");
        }else if (x>=1 && x<=3)
        {
            printf("Junior candidate\n");
        }else if (x>=4 && x<=7)
        {
            printf("Mid-level candidate\n");
        }else if (x>7)
        {
            printf("Senior candidate\n");
        }    
        
    }
    

    return 0;
}
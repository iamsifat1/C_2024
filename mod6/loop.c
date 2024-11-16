#include<stdio.h>

int main(){
    int count =0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Inner Loop.\n");
            count++;
        }
        printf("%d", count);
        printf("\n");
        
    }
    
}
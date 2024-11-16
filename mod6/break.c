#include<stdio.h>

int main(){
    for (int i = 1; i <= 300 ; i++)
    {
        printf("Cheaking number:\n");
        if (i%2==0 && i%3==0 && i%5==0)
        {
            printf("%d\n",i);
            break;
        }
        
    }

    return 0;
    

}
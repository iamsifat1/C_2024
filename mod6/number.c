#include<stdio.h>

int main(){
    int n, even=0, odd=0, positive=0, negetive=0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);

        if (x % 2 == 0)
        {
            even++;
        }else{
            odd++;
        }
        if (x>=0)
        {
            positive++;
        }else{
            negetive++;
        }
        
        
    }
    printf("Even:%d\n",even);
    printf("Odd:%d\n",odd);
    printf("Positive:%d\n",positive);
    printf("Negetive:%d\n",negetive);
    
    return 0;
}
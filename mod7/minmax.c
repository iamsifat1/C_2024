#include<stdio.h>
#include<limits.h>

int main(){
    int arr[5] = {5, 85, 105, 6,27};
    int i;
    int min = INT_MAX;
    int max = INT_MIN;

    for ( i = 0; i < 5; i++)
    {
        if (arr[i]<min)
        {
            min = arr[i];
        }

        if (arr[i]>max)
        {
            max = arr[i];
        }
        
        
    }
    printf("Min:%d\n Max:%d", min, max);
    return 0;
    

}
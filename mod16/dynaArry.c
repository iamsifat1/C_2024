#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int N;
    scanf("%d", &N);

    int x = 1;
    int *arr = (int *)malloc(x * sizeof(int));

    for (int  i = 0; i < N; i++)
    {
        
        if (i >=  x)
        {
            x += 1;
            int *temp = arr;
            arr = (int *)realloc(arr, x * sizeof(int));
            if (arr == NULL)
            {
                arr = temp;
            }
            
        }
        
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}
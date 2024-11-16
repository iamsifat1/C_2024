#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int fre[100001] = {0};

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        fre[arr[i]] += 1;
    }
    
    int cnt = 0;
    for (int i = 0; i < 100001; i++)
    {
        if (fre[i] == 1)
        {
            cnt++;
        }
        
    }
    printf("%d", cnt);
    return 0;
}
#include<stdio.h>

int main(){

    int N, T;
    scanf("%d %d", &N, &T);
    int sum = 0, count = 0;

    for (int i = 0; i < N; i++)
    {
        int x;
        scanf("%d", &x);

        sum += x;
        if (sum <= T)
        {
            count++;
            continue;
        }else if (sum > T)
        {
            break;
        }
    }
    printf("%d", count);
    return 0;
}
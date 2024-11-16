#include<stdio.h>
#include<string.h>


int main(){
    char a[100], b[100], c[100];
    scanf("%s %s %s", a, b, c);

    int len = strlen(a);
    int cnt = 0;

    for (int i = 0; i < len; i++)
    {
        if (b[i] != a[i])
        {
            cnt ++;
        }
        
    }

    for (int i = 0; i < len; i++)
    {
        if (c[i] != a[i])
        {
            cnt ++;
        }
        
    }
    
    printf("%d", cnt);
    return 0;
}
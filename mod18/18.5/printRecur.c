#include<stdio.h>


void recur(int x){
    if (x>0)
    {
        printf("I love Recursion\n");
        recur(x-1);
    }
    else 
    {
        return;
    }
    
}

int main(){
    int n;
    scanf("%d", &n);
    recur(n);
}